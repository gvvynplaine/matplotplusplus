#include <matplot/matplot.h>

int main() {
    using namespace matplot;
    image_channels_t image = imread("lena_gray.tiff");
    image = imvignette(image);
    imshow(image);

    wait();
    return 0;
}