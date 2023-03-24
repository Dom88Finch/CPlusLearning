// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <random>

// using namespace std;

// // Define a struct for user profiles
// struct Profile {
//     int age;
//     string gender;
//     string hobbies;
//     // Add more profile attributes as needed
// };

// // Define a function to calculate the compatibility score between two profiles
// double calculateCompatibility(Profile p1, Profile p2) {
//     double score = 0;
//     // Add weights and calculations for each profile attribute to determine overall compatibility score
//     // Example: age difference and common hobbies could be weighted more heavily
//     int ageDiff = abs(p1.age - p2.age);
//     score += 1.0 / (ageDiff + 1);
//     if (p1.gender != p2.gender) {
//         score += 0.5;
//     }
//     if (p1.hobbies == p2.hobbies) {
//         score += 0.75;
//     }
//     // Add more compatibility calculations as needed
//     return score;
// }

// int main() {
//     // Define sample user profiles
//     vector<Profile> profiles = {
//         {28, "male", "hiking"},
//         {23, "female", "reading"},
//         {31, "female", "yoga"},
//         {26, "male", "music"},
//         {29, "female", "hiking"}
//         // Add more profiles as needed
//     };
    
//     // Randomize the order of the profiles
//     shuffle(profiles.begin(), profiles.end(), default_random_engine());
    
//     // Define an empty vector to store the matches
//     vector<pair<Profile, Profile>> matches;
    
//     // Loop through each user profile and find their best match
//     for (int i = 0; i < profiles.size(); i++) {
//         Profile p1 = profiles[i];
//         double bestScore = 0;
//         Profile bestMatch;
//         for (int j = i+1; j < profiles.size(); j++) {
//             Profile p2 = profiles[j];
//             double score = calculateCompatibility(p1, p2);
//             if (score > bestScore) {
//                 bestScore = score;
//                 bestMatch = p2;
//             }
//         }
//         matches.push_back(make_pair(p1, bestMatch));
//     }
    
//     // Output the matches
//     for (auto match : matches) {
//         cout << "Match:" << endl;
//         cout << "User 1: " << match.first.age << " year old " << match.first.gender << " who likes " << match.first.hobbies << endl;
//         cout << "User 2: " << match.second.age << " year old " << match.second.gender << " who likes " << match.second.hobbies << endl;
//         cout << "Compatibility score: " << calculateCompatibility(match.first, match.second) << endl << endl;
//     }
    
//     return 0;
// }

/*
ChatGPT template of a Dating Application

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

// Define a struct for user profiles
struct Profile {
    int age;
    string gender;
    string hobbies;
    // Add more profile attributes as needed
};

// Define a function to calculate the compatibility score between two profiles
double calculateCompatibility(Profile p1, Profile p2) {
    double score = 0;
    // Add weights and calculations for each profile attribute to determine overall compatibility score
    // Example: age difference and common hobbies could be weighted more heavily
    int ageDiff = abs(p1.age - p2.age);
    score += 1.0 / (ageDiff + 1);
    if (p1.gender != p2.gender) {
        score += 0.5;
    }
    if (p1.hobbies == p2.hobbies) {
        score += 0.75;
    }
    // Add more compatibility calculations as needed
    return score;
}

int main() {
    // Define sample user profiles
    vector<Profile> profiles = {
        {28, "male", "hiking"},
        {23, "female", "reading"},
        {31, "female", "yoga"},
        {26, "male", "music"},
        {29, "female", "hiking"}
        // Add more profiles as needed
    };
    
    // Randomize the order of the profiles
    shuffle(profiles.begin(), profiles.end(), default_random_engine());
    
    // Define an empty vector to store the matches
    vector<pair<Profile, Profile>> matches;
    
    // Loop through each user profile and find their best match
    for (int i = 0; i < profiles.size(); i++) {
        Profile p1 = profiles[i];
        double bestScore = 0;
        Profile bestMatch;
        for (int j = i+1; j < profiles.size(); j++) {
            Profile p2 = profiles[j];
            double score = calculateCompatibility(p1, p2);
            if (score > bestScore) {
                bestScore = score;
                bestMatch = p2;
            }
        }
        matches.push_back(make_pair(p1, bestMatch));
    }
    
    // Output the matches
    for (vector<pair<Profile, Profile>>::iterator it = matches.begin(); it != matches.end(); ++it) {
        auto match = *it;
        cout << "Match: " << endl;
        cout << "User 1: " << match.first.age << " year old " << match.first.gender << " who likes " << match.first.hobbies << endl;
        cout << "User 2: " << match.second.age << " year old " << match.second.gender << " who likes " << match.second.hobbies << endl;
        cout << "Compatibility score: " << calculateCompatibility(match.first, match.second) << endl << endl;
    }
    
    return 0;
}


// ## expected outputMatch:
// User 1: 26 year old male who likes music
// User 2: 29 year old female who likes hiking
// Compatibility score: 0.538462

// Match:
// User 1: 23 year old female who likes reading
// User 2: 31 year old female who likes yoga
// Compatibility score: 0.333333

// Match:
// User 1: 28 year old male who likes hiking
// User 2: 31 year old female who likes yoga
// Compatibility score: 0.392857