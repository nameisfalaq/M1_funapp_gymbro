float calories(float h, float w, float a){
    float woman_weight;
    float woman_height;
    float woman_age;
    float woman_bmr;//bmr=basal metaboic rate
    float man_weight;
    float man_height;
    float man_age;
    float man_bmr;
    float final_bmr;
    switch(gender){
case 'F':
    woman_weight=weight * 4.35;
    woman_height=height * 4.7;
    woman_age= age *4.7;
    woman_bmr=woman_weight+woman_height-woman_age+655;

    if (2==activity_level){
        final_bmr=woman_bmr*1.375;
    }
    else if(1==activity_level){
        final_bmr=woman_bmr*1.2;
    }
    else if(3==activity_level){
        final_bmr=woman_bmr*1.55;
    }
    else {
        final_bmr=woman_bmr*1.725;
    }
    printf("Your BMR before taking activity level in consideration is %f\n",woman_bmr);
    printf("Your actual BMR is %f",final_bmr);
    break;
case 'M':
    man_weight=weight * 6.23;
    man_height=height * 12.7;
    man_age= age *6.8;
    man_bmr=man_weight+man_height-man_age+66;

    if (2==activity_level){
        final_bmr=man_bmr*1.375;
    }
    else if(1==activity_level){
        final_bmr=man_bmr*1.2;
    }
    else if(3==activity_level){
        final_bmr=man_bmr*1.55;
    }
    else {
        final_bmr=man_bmr*1.725;
    }
    printf("Your BMR before taking activity level in consideration is %f\n",man_bmr);
    printf("Your actual BMR is %f",final_bmr);
    break;
    }
    return final_bmr;
}