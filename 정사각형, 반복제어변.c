#include <stdio.h>
#include <windows.h>

int main(void) {
	int x = 30;
	int i = 0;
	while (i <10 ) {
		
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Rectangle(hdc, x, 100, x+60, 160);

		x = x + 70;
		i++;
	}
	return 0;
}