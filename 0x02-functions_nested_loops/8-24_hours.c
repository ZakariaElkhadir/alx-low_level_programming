#include <stdio.h>
#include <unistd.h> // for sleep function

void jack_bauer(void) {
    for (int hour = 0; hour < 24; hour++) {
        for (int minute = 0; minute < 60; minute++) {
            printf("%02d:%02d\n", hour, minute);
            fflush(stdout); // Flush output to ensure it's displayed immediately
            sleep(1); // Sleep for 1 second to mimic real time
        }
    }
}

int main() {
    jack_bauer();
    return 0;
}
