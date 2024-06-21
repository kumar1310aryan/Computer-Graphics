//Write a program in C to draw a point

#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;  // Detect graphics driver and mode
    initgraph(&gd, &gm, "");  // Initialize graphics mode

    // Set color to red
    setcolor(RED);

    // Draw a point at coordinates (100, 100)
    putpixel(100, 100, RED);

    delay(5000);  // Delay for 5 seconds before closing

    closegraph();  // Close graphics mode
    return 0;
}
