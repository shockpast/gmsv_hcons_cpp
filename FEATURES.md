# hcons.*
It's just a superior table for other tables or properties, that will be contained in there, nothing to see there~

## .version[]
[gmsv_hcons](https://github.com/shockpast/gmsv_hcons_cpp)'s Version formatted DD/MM/YY, it could be inconsistent and not up to date always, added for debugging and solving issues easier in future.

# hcons.sourcesdk.*
SourceSDK prop(s) and function(s) exported to Lua environment.

## .get_model_cache()
Amount of Models cached on server (4096 is maximum, going above will crash server without warnings), this function can be used for detecting crazy amount of models cached in memory and ask users to restart server to clear it.

# hcons.msg_filter.*
Hooks/Detours made to Source Engine that can be later accessed or somehow improve server's performance

## .ignore_message(string)
Finds `string` that was specified in arguments of [these functions](https://github.com/shockpast/gmsv_hcons/blob/56e36d11c7af0272f12e0fc16f341f3653a00c8f/source/hooks.cpp#L38-L55) message, and if it was found, doesn't log this to server's console.