#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
	time_t t = time(NULL);
	if (t == (time_t)(-1)) {
		printf("There was an error\n");
		return -1;
	}
	printf("Current time is %ld\n", t);
	localtime(&t);
	struct tm date = *localtime(&t);
	printf("Current date is %d-%02d-%02d %02d:%02d\n", date.tm_year + 1900, date.tm_mon+ 1, date.tm_mday, date.tm_hour, date.tm_min);
	printf("Timezone is: %s\n", date.tm_zone);
	return 0;
}

