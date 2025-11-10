package options;

#if desktop
import Discord.DiscordClient;
#end
import flash.text.TextField;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxGridOverlay;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import lime.utils.Assets;
import flixel.FlxSubState;
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxSave;
import haxe.Json;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;
import flixel.input.keyboard.FlxKey;
import flixel.graphics.FlxGraphic;
import Controls;
import openfl.Lib;

using StringTools;

class TPBHADOptionsSubState extends BaseOptionsMenu
{
	public function new()
	{
		title = 'The Path Between Hope And Despair';
		rpcTitle = 'TPBHAD Settings Menu'; //for Discord Rich Presence
		
        var option:Option = new Option('PIBBY APOCALYPSE SHAKE!?', //Name
            "Inspired by Pibby Apocalypse. Will shake screen when enabled", //Description
            'coolCamShake', //Save data variable name
            'bool', //Variable type
            false); //Default value
        addOption(option);
		
		var option:Option = new Option('Auto-Pause', //Name
			"If unchecked, the game will not pause when you tab away.", //Description
			'autoPause', //Save data variable name
			'bool'); //Default value
		addOption(option);

		super();
    }

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		if (controls.BACK)
		{
			close();
		}
	}
}