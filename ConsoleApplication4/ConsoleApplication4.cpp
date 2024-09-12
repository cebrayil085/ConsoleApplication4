

//Massiv elementlərinin Sayinin hesablanması :
//#include <iostream>
//
//int main() {
//    int arr[] = { 1, 2, 3, 4, 5 }; 
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    std::cout << "Massivdəki elementlərin sayı: " << size << std::endl;
//
//    return 0;
//}







//Massivdə hər bir elementin neçə dəfə göründüyünü təyin edən proqram yazın :

//#include <iostream>
//#include <unordered_map>
//#include <vector>
//
//int main() {
//    
//    std::vector<int> arr = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4 };
//
//    
//    std::unordered_map<int, int> frequencyMap;
//
//    
//    for (int num : arr) {
//        frequencyMap[num]++;
//    }
//
//    std::cout << "Elementlərin tezliyi:" << std::endl;
//    for (const auto& pair : frequencyMap) {
//        std::cout << "Element: " << pair.first << ", Sayı: " << pair.second << std::endl;
//    }
//
//    return 0;
//}





//Müsbət və mənfi ədədlərin cəminin hesablanması :

//#include <iostream>
//#include <vector>
//
//int main() {
//   
//    std::vector<int> arr = { 10, -5, 3, -1, 7, -2, 0, 4 };
//
//    int positiveSum = 0;
//    int negativeSum = 0;
//
//    
//    for (int num : arr) {
//        if (num > 0) {
//            positiveSum += num;
//        }
//        else if (num < 0) {
//            negativeSum += num; 
//        }
//    }
//
//    std::cout << "Müsbət ədədlərin cəmi: " << positiveSum << std::endl;
//    std::cout << "Mənfi ədədlərin cəmi: " << negativeSum << std::endl;
//
//    return 0;
//}
//


//Massivin müsbət və mənfi elementlərinin cəmini ayrı - ayrılıqda sayan və əks etdirən proqram yazın :


//#include <iostream>
//#include <vector>
//
//int main() {
//   
//    std::vector<int> arr = { 10, -5, 3, -1, 7, -2, 0, 4 };
//
//    
//    int positiveSum = 0;
//    int negativeSum = 0;
//
//    
//    int positiveCount = 0;
//    int negativeCount = 0;
//
//    
//    for (int num : arr) {
//        if (num > 0) 
//            positiveSum += num; 
//            positiveCount++;   
//        }
//        else if (num < 0) {
//            negativeSum += num; 
//            negativeCount++;    
//        }
//    }
//
//    std::cout << "Müsbət ədədlərin cəmi: " << positiveSum << std::endl;
//    std::cout << "Müsbət ədədlərin sayı: " << positiveCount << std::endl;
//    std::cout << "Mənfi ədədlərin cəmi: " << negativeSum << std::endl;
//    std::cout << "Mənfi ədədlərin sayı: " << negativeCount << std::endl;
//
//    return 0;
//}