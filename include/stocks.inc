#if defined _stocks_included
	#endinput
#endif
#define _stocks_included

const SPACE_CHAR = 32

enum ChatColors
{
	DEFAULT,
	RED,
	TEAM,
	GREEN,
	LIME,
	LIGHTGREEN,
	LIGHTRED,
	GRAY,
	LIGHTOLIVE,
	OLIVE,
	PURPLE,
	LIGHTBLUE,
	BLUE
}

stock ParseString(const String:input[], String:s1[], String:s2[] = "", String:s3[] = "", String:s4[] = "", String:s5[] = "", String:s6[] = "", String:s7[] = "", String:s8[] = "", String:s9[] = "", String:s10[] = "", String:s11[] = "", String:s12[] = "")
{
	new a, b, c, d
	b = strlen(input)
	for(a = 0; a < b; ++a)
	{
		if(input[a] != SPACE_CHAR)
		{
			switch(c)
			{
				case 0: s1[d] = input[a]
				case 1: s2[d] = input[a]
				case 2: s3[d] = input[a]
				case 3: s4[d] = input[a]
				case 4: s5[d] = input[a]
				case 5: s6[d] = input[a]
				case 6: s7[d] = input[a]
				case 7: s8[d] = input[a]
				case 8: s9[d] = input[a]
				case 9: s10[d] = input[a]
				case 10: s11[d] = input[a]
				case 11: s12[d] = input[a]
			}
			++d
		}
		else
		{
			c++
			d = 0
		}
	}
	return c+1
}

stock PrintChatColor(const id, const color, String:input[], any:...)
{
	// "\x0A", "\x0D", "\x0F" - What colors is it?
	static const String:colors[ChatColors][] = { "\x01", "\x02", "\x03", "\x04", "\x05", "\x06", "\x07", "\x08", "\x09", "\x10", "\x0B", "\x0C", "\x0E" }

	decl String:data[191]
	FormatEx(input, 190, "\x01%s", input)
	VFormat(data, 190, input, 4)
	
	
}