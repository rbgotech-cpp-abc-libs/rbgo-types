#include <stdlib.h>//setbuf, system, exit, atoi
#include <stdio.h>//puts, printf, scanf
#include <limits.h>
#include <float.h>

#include <stdint.h>
#define rbgoINTBITS 64
#define rbgoFLTBITS 128
#include <rbgo-types.h>

#define MENU_LENGTH 4
const char* menuStrings[MENU_LENGTH] = {
	"0	menu",
	"1	quit",
	"2	clear screen",

	"3	Basic types, their size and range: "
};

int main(){

	setbuf(stdout, NULL);

	char input[16] = {0};
	rbgo::Tu32 mc=0;

	//---- Test case data alloc ----

	while(1){

		switch(mc){
		case 0: while(mc < MENU_LENGTH) puts(menuStrings[mc++]); break;
		case 1: goto break2;
		case 2: system("cls | clear"); break;

		//---- Test case exec ----
		case 3:
			printf("%-20s %6s %4s %22s  %-24s\n", "TYPE", "DEF", "BITS", "MIN", "MAX");
			printf("%-20s %6s %4u %22d  %-24d\n",	"int8_t",		"Ti8",	sizeof(rbgo::Ti8)*8,	INT8_MIN, INT8_MAX);
			printf("%-20s %6s %4u %22u  %-24u\n",	"uint8_t",		"Tu8",	sizeof(rbgo::Tu8)*8,	0, UINT8_MAX);
			printf("%-20s %6s %4u %22d  %-24d\n",	"int16_t",		"Ti16",	sizeof(rbgo::Ti16)*8,	INT16_MIN, INT16_MAX);
			printf("%-20s %6s %4u %22u  %-24u\n",	"uint16_t",		"Tu16",	sizeof(rbgo::Tu16)*8,	0, UINT16_MAX);
			printf("%-20s %6s %4u %22d  %-24d\n",	"int",			"Ti",	sizeof(rbgo::Ti)*8,		INT_MIN, INT_MAX);
			printf("%-20s %6s %4u %22u  %-24u\n",	"unsigned int",	"Tu",	sizeof(rbgo::Tu)*8,		0, UINT_MAX);
			printf("%-20s %6s %4u %22d  %-24d\n",	"int32_t",		"Ti32",	sizeof(rbgo::Ti32)*8,	INT32_MIN, INT32_MAX);
			printf("%-20s %6s %4u %22u  %-24u\n",	"uint32_t",		"Tu32",	sizeof(rbgo::Tu32)*8,	0, UINT32_MAX);
			printf("%-20s %6s %4u %22ld  %-24ld\n",	"int64_t",		"Ti64",	sizeof(rbgo::Ti64)*8,	INT64_MIN, INT64_MAX);
			printf("%-20s %6s %4u %22lu  %-24lu\n",	"uint64_t",		"Tu64",	sizeof(rbgo::Tu64)*8,	0, UINT64_MAX);
			printf("%-20s %6s %4u %22E  %-24E\n",	"float",		"Tf32",	sizeof(rbgo::Tf32)*8,	FLT_MIN, FLT_MAX);
			printf("%-20s %6s %4u %22E  %-24E\n",	"double",		"Tf64",	sizeof(rbgo::Tf64)*8,	DBL_MIN, DBL_MAX);
			printf("%-20s %6s %4u %22E  %-24E\n",	"long double",	"TfLD",	sizeof(rbgo::TfLD)*8,	LDBL_MIN, LDBL_MAX);
		break;
		case 4:
		break;
		case 5:
		break;
		}

		printf("choice: ");
		scanf("%2s", input);
		mc = atoi(input);
	}

break2://---- Test case data free ----

	return 0;
}
