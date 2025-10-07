#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Chemin relatif vers l'image
    cv::Mat image = cv::imread("../data/image.jpg");

    if(image.empty()) {
        std::cout << "Image non trouvée !" << std::endl;
        return -1;
    }

    // Affichage ou sauvegarde
    cv::imshow("Image", image);
    cv::waitKey(0);

    // Ou pour tester sans GUI : cv::imwrite("../data/output.jpg", image);

    return 0;
}
