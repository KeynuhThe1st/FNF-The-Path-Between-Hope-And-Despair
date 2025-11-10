// not sure if Poppa Bacon is bullshiting with me but vro said literally said their computer almost sunked up due to the application
// so im now adding this for the better

package;

import openfl.Lib;
import haxe.Timer;

/**
 * LagPrevention.hx
 * Adds basic protections against runaway CPU usage, unbounded loops,
 * and heavy startup lag.
 *
 * Usage:
 * Call `LagPrevention.init()` early in Main.hx or PlayState.hx
 */

class LagPrevention
{
    /** Sets a safe frame rate and prevents game from burning CPU */
    public static function init():Void
    {
        try
        {
            if (Lib.current != null && Lib.current.stage != null)
            {
                Lib.current.stage.frameRate = 60; // Safe FPS cap
                trace("[LagPrevention] Frame rate capped to 60 FPS");
            }
        }
        catch (e:Dynamic)
        {
            trace("[LagPrevention] Could not set frame rate: " + Std.string(e));
        }

        // Optional: start a watchdog timer to detect lag spikes
        Timer.delay(() -> checkPerformance(), 3000);
    }

    /** Checks if CPU or frame lag is getting too high */
    static function checkPerformance():Void
    {
        #if sys
        var mem = Sys.cpuTime(); // lightweight check
        if (mem > 10)
        {
            trace("[LagPrevention] Warning: High CPU usage detected (" + mem + "s)");
        }
        #end
    }

    /** Example utility: run heavy tasks with delay between frames */
    public static function safeLoop(task:Void->Void, repeat:Int = 1, delayMS:Int = 16):Void
    {
        var count = 0;
        var t = new Timer(delayMS);
        t.run = function()
        {
            task();
            count++;
            if (count >= repeat)
                t.stop();
        }
    }
}
