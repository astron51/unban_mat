__declspec(naked) void bypassBan()
{
	_asm
	{
		mov [eax - 0xA3], 0x1;
		mov edx, [eax - 0xA3];
		push eax
		push edi
		mov ForgedCookie, ebx;
		jmp[returnHook];
	}
}
