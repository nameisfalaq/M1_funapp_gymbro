int main(){
    char user_name[50];

    printf("Hi this is your Gymbro \nYour calorie calculator who tells you about how many calories your body needs.");
    printf("\nMay I please know your name...");
    gets(user_name);
    printf("\nHi %s. Let's Get started.", user_name);
    printf("To get to know about your Basal Metabolic Rate we'll need you to specify your gender so that we can provide you accurate info.\n");
    printf("Type M if you are Male and type F if you're a Female.\n");
    scanf("%c",&gender);

    if (gender == 'M'){
        printf("Sheesh!! Let's go\n");
    }
    else{
        printf("Sheesh!!! Let's go\n");
    }

    printf("Enter your weight in pounds(lbs):: 1kg==2.204 lbs\n");
    scanf("%f", &weight);

    printf("Enter your height in inches(in)):: 1ft==12 inches\n");
    scanf("%f", &height);

    printf("Enter your age\n");
    scanf("%f", &age);

    printf("State you activity level and how active are you on a daily basis:\n");
    printf("Type 1 if you do sedentary movement activities.\n");
    printf("Type 2 if you do light workout 1-2x a week.\n");
    printf("Type 3 if you do moderate workout 3-5x a week.\n");
    printf("Type 4 if you do extreme workout 7x a week.\n");
    scanf("%d", &activity_level);

    printf("%f", calories(height,weight,age));

    return 0;
}