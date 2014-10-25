/**
Test the Lua lib
**/
#include <stdio.h>
#include <windows.h>
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
#include "luaconf.h"

//WHY
int main(int argc, char* argv[]){

	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	luaL_dofile(L,"./test.lua");
	lua_close(L);
	system("pause");
	return 0;
}