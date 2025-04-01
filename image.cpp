#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;
s
int main() {
    // Load an image from file
    Mat image = imread("example.jpg");

    // Check if the image is loaded successfully
    if (image.empty()) {
        cout << "Error: Could not load image!" << endl;
        return -1;
    }

    // Convert the image to grayscale
    Mat grayImage;
    cvtColor(image, grayImage, COLOR_BGR2GRAY);

    // Apply GaussianBlur to reduce noise and improve edge detection
    Mat blurredImage;
    GaussianBlur(grayImage, blurredImage, Size(5, 5), 1.5);

    // Detect edges using Canny
    Mat edges;
    Canny(blurredImage, edges, 100, 200);

    // Display the original and edge-detected images
    imshow("Original Image", image);
    imshow("Edge Detection (Canny)", edges);

    // Save the edge-detected image
    imwrite("edges_output.jpg", edges);

    // Wait until a key is pressed and then close the windows
    waitKey(0);
    destroyAllWindows();

    return 0;
}


