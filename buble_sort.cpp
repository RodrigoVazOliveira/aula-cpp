#include <cstdint>
#include <iostream>
#include <string>

class Video {
    std::string title;
    int time;

public:
    Video(const std::string title_value,
          const int time_value)
        : title(title_value), time(time_value) {
    }

    std::string get_title() const {
        return title;
    };

    int get_time() const {
        return time;
    };
};

void sort_by_name(Video* videos[], const int32_t length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (videos[j]->get_title().compare(videos[j+1]->get_title())  > 0) {
                Video* video_aux = videos[j];
                videos[j] = videos[j + 1];
                videos[j + 1] = video_aux;
            }
        }
    }
}


int main(int argc, char *argv[]) {
    int length, i = 0;
    std::cout << "Por favor, digite quantos videos deseja adicionar: ";
    std::cin >> length;
    Video* videos[length];
    

    while (i != length) {
        std::string title;
        int time;
        std::cout << "Digite o titulo e tempo: " << std::endl;
        std::cin >> title;
        //std::getline(std::cin, title);
        std::cin >> time;
        videos[i] = new Video(title, time);        
        i++;
    }

    sort_by_name(videos, length); 
    
    for (i = 0; i < length; i++) {
        std::cout << "Nome: " << videos[i]->get_title() 
                  << " Tempo: " << videos[i]->get_time() 
                  << std::endl;
        delete videos[i];
        videos[i] = nullptr;
    }
    
    return 0;
}
