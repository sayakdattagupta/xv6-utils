#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
	if (argc < 2) {
		fprintf(2, "usage: sleep <tics>\n");
		exit(1);
	}

	int ticks = atoi(argv[1]);
	if (ticks <= 0) {
		fprintf(2, "sleep: invalid number of ticks\n");
		exit(1);
	}

	pause(ticks);

	exit(0);
}
