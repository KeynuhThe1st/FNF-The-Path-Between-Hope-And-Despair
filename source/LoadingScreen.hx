// 11.9 shit didnt work so i might probably have to do more of this tomorrow *sigh*

import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.util.FlxTimer;
import flixel.math.FlxMath;

class LoadingScreen extends FlxGroup
{
	public var loadingText:FlxText;
	public var barBg:FlxSprite;
	public var barFill:FlxSprite;
	public var progress:Float =0;
	
	public function new()
	{
		super();

		// Loading text
		loadingText = new FlxText(0, FlxG.height *0.42, FlxG.width, "LOADING...");
		loadingText.setFormat(null,48,0xffffffff, "center");
		loadingText.antialiasing = ClientPrefs.globalAntialiasing;
		add(loadingText);

		// Bar background
		var barW = Std.int(FlxG.width *0.6);
		var barX = Std.int((FlxG.width - barW) /2);
		var barY = Std.int(FlxG.height *0.55);

		barBg = new FlxSprite(barX, barY).makeGraphic(barW,14,0xff444444);
		barBg.antialiasing = ClientPrefs.globalAntialiasing;
		add(barBg);

		// Bar fill (starts empty)
		barFill = new FlxSprite(barX, barY +2).makeGraphic(barW,10,0xffff16d2);
		barFill.antialiasing = ClientPrefs.globalAntialiasing;
		barFill.scale.x =0; // empty
		add(barFill);
	}

	public function setProgress(p:Float)
	{
		// clamp p between0 and1
		progress = Math.max(0, Math.min(1, p));
		barFill.scale.x = progress;
	}

	// Smoothly move current progress toward target (call every frame)
	public function updateProgressTowards(target:Float)
	{
		var targetClamped = Math.max(0, Math.min(1, target));
		// Simple easing
		progress +=0.5 * (targetClamped - progress);
		barFill.scale.x = progress;
	}

	// Small pulse effect for the text when player presses accept
	public function pulse()
	{
		loadingText.scale.set(1.08,1.08);
		new FlxTimer().start(0.12, function(_) {
			loadingText.scale.set(1,1);
		});
	}
}
