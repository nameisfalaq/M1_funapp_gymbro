#  **Requirements**

### **Introduction**
<hr>
The GymBro application is aimed to be your buddy for the gym. The idea behind it is that with the help of GymBro you can get to know about the calories your body requires to maintain your weight. Now if your goal is to gain or lose weight we provide basic information about how to create a caloric surplus or caloric deficit so that your body changes with respect to your goals taking in consideration your body weight, height and age as basic metrics. We can also suggest workouts taking in consideration how familiar you are with exercising and later on as an add on providing supplement and nutrition knowledge will be a great add-on. First thing is to create a MVP (Minimum Viable Product) code.

### **Research/State of art**
<hr>
The research tells us about ways in which we can calculate calories that our body needs taking in consideration the Basal Metabolic Rate(BMR).

We need to take in consideration three major factors to do so which are weight, height and age. The metrics and units we will take as input will be discussed later on.

There are a lot of websites which provide you with calorie calculation details as well.

Here is an image for your reference.

![research_1](https://user-images.githubusercontent.com/63052065/143007419-592d921d-fde1-47a0-b3e8-24bc45ea1f77.png)


### **4Ws &amp; 1H**
<hr>

1. What
<hr> 

A basic calorie calculator which tells us the calories your bodies need for a specific goal.

 2. Where
<hr>

It can be used on windows and linux operating systems which have the capabilities of compiling the c program in accordance to the project  needs.

 3. When
<hr>

MVP will be put into action by 25th  November 2021.

4. Why
<hr>

Majority of people go through their lifes not knowing what to do if they want to make changes to their body. The first step to change is knowing what are the calories your body needs to maintain a specific weight and then later on as required by the goal of the user you can tell them how they can gain or lose weight with the help of calories.

5. How
<hr>

The idea will for now be put into action with the help of C programming language and logic building.

### **SWOT Analysis**
<hr>

Strengths
<hr>

The program lets you get data about your calorie intake and what to do to increase or decrease bodyweight.

Weaknesses
<hr>

The data is only pretty basic at the  moment and can be made better.

Opportunities
<hr>

Private gyms can utilize this program for calorie calulation.

Threats
<hr>
The threats are already existing calculators for checking calories.

### __High Level Requirements__
<hr>

| ID            | Description   | Status  |
| ------------- |:-------------:| -------:|
| HLR_1         | Calorie calculator shall give maintainance calorie info| Implemented |
| HLR_2         | Calorie calculator shall give caloric surplus and deficit info | Implemented    |


### **Low Level Requirements**
<hr>

| ID            | Description   | Status  |
| ------------- |:-------------:| -------:|
| LLR_1_HLR_1         | Maintainance calories => int input and int output for calories calculator | Implemented |
| LLR_1_HLR_2       |Caloric Surplus or Caloric Deficit => int input from maintainance calories and results in int format | Implemented    |
