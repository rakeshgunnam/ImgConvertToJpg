#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <highlevelmonitorconfigurationapi.h>

using namespace std;
using namespace cv;

int main()
{
    cout << "\n\nImage Type Convertion to JPG\n\n";

   /* cout << "Enter Image Type Extention to Convert to JPG \n";
    string Extention;*/
   /* cin >> Extention;*/
    string Path, DestPath;
    cout << "Enter Root Path:\n";
    cin >> Path;

    cout << "\nEnetr Destination Path:\n";
    cin >> DestPath;

    cout << "\nEnter Name Prefix: \n";
    string NPrefix;
    cin >> NPrefix;

    vector<String> fn;
    glob(Path+"\\*.*", fn, false);

    vector<Mat> images;

    int count = fn.size();

    for (int i = 0; i < count; i++)
    {
        Mat img = imread(fn[i]);

        if (img.empty())
        {
            cout << "Can not open file or Image is not present\n";
        }

        bool check = imwrite(DestPath + "\\" + NPrefix + to_string(i) + ".jpg", img);

        if (check == false)
        {
            cout << "Saving Failed... " + fn[i]+"\n";
        }
        else {
            cout << "Successfully Saved!.. " + fn[i] + "\n";
        }

    }

    return 0;
}
