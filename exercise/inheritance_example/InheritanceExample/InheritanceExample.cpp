// InheritanceExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Content.h"
#include "VideoContent.h"
#include <vector>

int main()
{
    std::cout << "Hello World!\n";

    // Object of Parent Class
    Content* c = new Content("GoPro Hero 15", 155.3);

    std::cout << c->GetName() << std::endl;


    VideoContent* video = new VideoContent("Pepa Pig", 180);

    std::cout << video->GetName() << std::endl;

    for (int i = 0; i < 1000; i++)
    {
        video->View();
    }

    std::cout << video->GetViews() << std::endl;

    //// 

    video->GetViews(); // child method
    Content* content = video; // assign child objec to parent 

    // polymorp data structure
    vector<Content*> allcontent; // 

    allcontent.push_back(c);
    allcontent.push_back(video);
//  allcontent.push_back(promotion);
//  promotions

    for (Content* var : allcontent)
    {
        std::cout << var->GetName() << " " << var->GetDurationInSeconds() << std::endl;

        var->PrintPost();
    
        if (VideoContent* d_ptr = dynamic_cast<VideoContent*>(var)) {
            cout << "Ha this is video content" << endl;
        }
    }
}