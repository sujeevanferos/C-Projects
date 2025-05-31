#include <stdio.h>

void scan_portal(int level) {
    int signal = level * 42;
    printf("scan_portal(%d): signal = %d, &signal = %p\n", level, signal, (void*)&signal);

    if (level == 3) {
        printf("Portal interference detected. Breaking scan early.\n");
        return;
    }

    scan_portal(level + 1);

   
    printf("Returning from level %d\n", level);
}

int main() {
    scan_portal(0);
    return 0;
}
