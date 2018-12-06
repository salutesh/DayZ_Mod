class CfgMods
{
	class DayZMod
	{
	    dir = "DayZMod";
		picture = "";
	    action = "";
	    hideName = 1;
	    hidePicture = 1;
		name = "DayZMod";
	    credits = "Steve aka Salutesh";
	    author = "Steve aka Salutesh";
	    authorID = "0";
	    version = "1.0";
	    extra = 0;
	    type = "mod";

	    dependencies[] = {"Game", "World", "Mission"};

	    class defs
	    {
			class gameScriptModule
			{
				value = "";
				files[] = {"DayZMod/scripts/3_Game"};
			};
	        class worldScriptModule
            {
                value = "";
                files[] = {"DayZMod/scripts/4_World"};
            };
			class missionScriptModule
			{
				value = "";
				files[] = {"DayZMod/scripts/5_Mission"};
			};
        };
    };
};