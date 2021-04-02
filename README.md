# ImgConvert - Steps to setup OpenCV in Visual Studio C++ Project

Step 1: Navigate to https://github.com/opencv/opencv and 
        Goto Releases and download latest virsion of OpenCV (.exe file).
        Install downloaded OpenCV in your Computer.
        
Step 2: Setup Environmental Veriable (Eg. C:\opencv\build\x64\vc15\bin)

Step 3: Create C++ Project in Visual Studio and After successfully created a project Right Click on the project and Goto the Properties (Project>Properties).

Step 4: Right Click on Project in the right side (Project > Properties > VC++ Directories >)

Step 5: Within "VC++ Directories" > 

Click on "Include Directories" and Click Edit > Click on New Line and Paste the Directory Path. (Eg. C:\opencv\build\include)

Click on "Library Directories" and Click Edit > Click on New Line and Paste the Directory Path. (Eg. C:\opencv\build\x64\vc15\lib)

Step 6: Navigate to Linker > Input  -- With in Input Click on Additional Dependencies and click Edit. And Add Dependency name. (Eg. opencv_world451d.lib;)

This file name will be found in OpenCV Directory (Eg. C:\opencv\build\x64\vc15\bin)

Within the following Path, "opencv_world451d.dll" -> similar kind of file will be present (File name may vary according to the versions).

Copy the file name and follow the step 6. But note, change file extention ".dll" to ".lib" while adding into Additional Dependencies.

Step 7: By now, Successfully Seted up OpenCV in the Visual Studio C++ Project.
