#include <stdio.h>

struct InstaProfile
{
    char username[50];
    int followers;

    struct Bio
    {
        char description[100];
        int age;
    } bio;
};
main()
{
    struct InstaProfile profile = {
        "purvang",
        5000,
        {"BCA Student and Tech Enthusiast", 21}
    };

    printf("Username: %s\n", profile.username);
    printf("Followers: %d\n", profile.followers);
    printf("Description: %s\n", profile.bio.description);
    printf("Age: %d\n", profile.bio.age);

}
