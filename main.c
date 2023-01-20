#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int home();
int about_us();
int book();
int contact_us();
int tree_species();

int about_us(){
    printf("\n\nABOUT US\n\n");
printf("Plant It has a mission for enhancing environmentally sound policies and practices. A new initiative with an aim to maintain and enhance the natural, eco system. It includes human development objectives. The idea of Plant It is having a global approach for friendly environment making progress on social and environment development as well. As vivid management helps the economy in reducing ecological scarcities, Plant It aims to make contribution to the green economy; Plant It is highly active in enhancing of sustainable development globally.\n");
printf("\n'The hope of thousands of leaves starts from one leaf\n");

printf("\nOur initiative is to spread greenery on each and event event of our registered member. Whether it's your birthday, anniversary or any other function in your family, you can book any plant of your choice and Plant It will deliver the plant to your address. Plant it in your house or near by and you'll get reminders to post a picture to track the growth of the plant at some intervals of time.\n\n");
}

int book(){
    char n[20],e[30],m[12],a[100];
    int c;
printf("Enter your name:");
gets(n);
scanf("%[^\n]%*c",&n);
printf("\nEnter your emailID:");
scanf("%[^\n]%*c",&e);
printf("\nEnter your mobile no.:");
scanf("%[^\n]%*c",&m);
printf("\nEnter your address:");
scanf("%[^\n]%*c",&a);
printf("\nChoose a tree:");
printf("\nPress <1> to choose Coconut Tree\n");
printf("Press <2> to choose Jamun Tree\n");
printf("Press <3> to choose Guava Tree\n");
printf("Press <4> to choose Neem Tree\n");
printf("Press <5> to choose Eucalyptus Tree\n");
printf("Press <6> to choose Babool Tree\n");
printf("Press <7> to choose Mango Tree\n");
printf("Press <8> to choose Tamarind Tree\n");
printf("Press <9> to choose Teak Tree\n");
printf("Press <10> to choose Mahogany Tree\n");
printf("Press <11> to choose Banyan Tree\n");
printf("Press <12> to choose Deodar Tree\n");
scanf("%d",&c);
printf("\nName:-%s\n",n);
printf("\nEmail ID:-%s\n",e);
printf("\nMobile No:-%s\n",m);
printf("\nAddress:-%s\n\n",a);
if(c==1){
    printf("Tree:- Coconut Tree\n\n");
}
else if(c==2){
    printf("Tree:- Jamun Tree\n\n");
}
else if(c==3){
    printf("Tree:- Guava Tree\n\n");
}
else if(c==4){
    printf("Tree:- Neem Tree\n\n");
}
else if(c==5){
    printf("Tree:- Eucalyptus Tree\n\n");
}
else if(c==6){
    printf("Tree:- Babool Tree\n\n");
}
else if(c==7){
    printf("Tree:- Mango Tree\n\n");
}
else if(c==8){
    printf("Tree:- Tamarind Tree\n\n");
}
else if(c==9){
    printf("Tree:- Teak Tree\n\n");
}
else if(c==10){
    printf("Tree:- Mahogany Tree\n\n");
}
else if(c==11){
    printf("Tree:- Banyan Tree\n\n");
}
else if(c==12){
    printf("Tree:- Deodar Tree\n\n");
}
}

int contact_us(){
    printf("\n\nCONTACT US\n\n");
    printf("Phone number: 9879633351,7984548502\n");
    printf("Email: plantit1212@gmail.com\n\n");
}

int tree_species(){
    int b;
    printf("\nPress <1> to know about Coconut Tree\n");
    printf("Press <2> to know about Jamun Tree\n");
    printf("Press <3> to know about Guava Tree\n");
    printf("Press <4> to know about Neem Tree\n");
    printf("Press <5> to know about Eucalyptus Tree\n");
    printf("Press <6> to know about Babool Tree\n");
    printf("Press <7> to know about Mango Tree\n");
    printf("Press <8> to know about Tamarind Tree\n");
    printf("Press <9> to know about Teak Tree\n");
    printf("Press <10> to know about Mahogany Tree\n");
    printf("Press <11> to know about Banyan Tree\n");
    printf("Press <12> to know about Deodar Tree\n");
    scanf("%d",&b);
    if(b==1){
        printf("\nCOCONUT TREE");
        printf("\n\nCoconut is an edible fruit of the coconut palm (Cocos nucifera), a tree of the palm family (Arecaceae). Coconuts probably originated somewhere in Indo-Malaya and are one of the most important crops of the tropics. There are over 150 species of coconuts that can be found in 80 different countries throughout the world. Coconut tree grows only in the tropical climate. This plant live on the sandy soil, requires a lot of sunlight and regular rainfalls.\n\n");
    }
    else if(b==2){
        printf("\nJAMUN TREE");
        printf("\n\nJamun tree also known as black plum is an evergreen tropical tree that native to Indian Subcontinent. The fruit of Jamun Tree is well known as blackberry. The tree is a growing species that can grow up to 30m and can live up to 100 years. Jamun is considered to be a magic tree as it is beneficial right from the root, leaves, fruits and even bark for numerous medicinal properties. The pulp and the seeds are significant for treating diabetes while the leaves of the tree are useful for teeth and gum disease.\n\n");
    }
    else if(b==3){
        printf("\nGUAVA TREE");
        printf("\n\nGuava tree is a common tropical fruit cultivated in such many regions as India that lead to become one of the largest producers in the world. The guava tree can live up to 40 years. The fruit is commonly eaten fresh or made into beverages, jams, and other foods. Various parts of the plant, including the leaf and the fruit, are used as medicine. People use guava leaf for stomach and intestinal conditions, pain, diabetes, and wound healing.\n\n");
    }
    else if(b==4){
        printf("\nNEEM TREE");
        printf("\n\nThis tree is famously popular for its medicinal values and healing properties. It is used in various products like shampoos, creams, ointments, etc. it is also used as a natural pesticide. It can kill over 500 different types of pests by changing the way they grow and by interfering with their metabolism. It is also used as a spermicide in many places.\n\n");
    }
    else if(b==5){
        printf("\nEUCALYPTUS TREE");
        printf("\n\nThis tall evergreen tree grows up to 300 feet and is known for its essence which is used in a lot of products. It relieves sore muscles and improves blood circulation. It is taken during fever and clears respiratory tracts too. It clears congestion just by inhaling while simultaneously purifying blood. The bark of the tree is used in making plywood, doors, and windows. This is generally found in the Nilgiris region of India.\n\n");
    }
    else if(b==6){
        printf("\nBABOOL TREE");
        printf("\n\nThis tree is considered holy in the country. People use the bark for toothbrushes as it has its inherent medicinal values. It is also used as fodder for cattle. The dried leaves of this tree are sprinkled over wounds to make them stop bleeding. If the powder is mixed with water and used for gargling, it cures mouth diseases and ulcers. It has anti-fungal, anti-bacterial, anti-oxidant, anti-malaria, and anti-viral properties. The bark of the tree is also powdered and used to clean teeth.\n\n");
    }
    else if(b==7){
        printf("\nMANGO TREE");
        printf("\n\nMango trees is a very large and evergreen tree that can grow up to 40m tall with 10m crown radius. Mango tree also is cultivated in most tropical and warmer subtropical regions. The trees are very long-lived that can live more than 100 years. Mango Trees have dark green coloured leaves. The fruit of Mango Tree, i.e., Mango, is often considered as the King of all the fruits, Various parts of Mango Tree serve medicinal purposes.\n\n");
    }
    else if(b==8){
        printf("\nTAMARIND TREE");
        printf("\n\nTamarind tree is a medium growth tree that can have a maximum crown up to 18m. Also tamarind is a long lived tree. The benefit from Tamarind tree is variatives. Tamarind tree is native of Africa and Sudan. Tamarind has been growing forever in India and other South East Asia and is one of the most important ingredients in South Indian and South Asian cuisine.\n\n");
    }
    else if(b==9){
        printf("\nTEAK TREE");
        printf("\n\nTeak is a tropical hardwood tree species in the family Lamiaceae. It is a large, deciduous tree that occurs in mixed hardwood forests. This is an evergreen tree that has a yellowish blonde/ reddish-brown bark which is used in making furniture, boat decks, and indoor flooring. The bark is also bitter and is used to clear sore throats and fever. It is also useful in stomach problems and headaches.\n\n");
    }
    else if(b==10){
        printf("\nMAHOGANY TREE");
        printf("\n\nMahogany, commonly known as American mahogany, Cuban mahogany, small-leaved mahogany, and West Indian mahogany, is a species of Mahogany native to South Florida in the United States and islands in the Caribbean. This tree is very famous for its beautiful colours and sturdiness. The bark of this tree is typically used for making musical instruments and furniture. The tree is a crucial commodity in the furniture industry and is the favourite for many people who want to have sturdy and durable furniture and even flooring. The tree is not only popular for its durability but also for its other benefits. It provides shade and shelter to many animals and also purifies air at a rapid rate.\n\n");
    }
    else if(b==11){
        printf("\nBANYAN TREE");
        printf("\n\nThe national tree of India has a large canopy and aerial prop roots. It is also considered holy by many Hindus and Buddhists and symbolizes life and fertility. It was considered as the resting place of Lord Krishna. It produces a special kind of rubber and the milk of the tree is used widely in gardening as well. The wood is used in making paper and fastening ropes. Women in Nepal crush the roots of this tree and use it in shampoo, conditioner, and skin products.\n\n");
    }
    else if(b==12){
        printf("\nDEODAR TREE");
        printf("\n\nCedrus Deodara is found in the Himalayan region and is worshipped by Hindus throughout the country. Deodar is grown as an ornamental tree and the leaves and another part of the tree is used in medicines and Ayurveda. The leaves have a calming effect on the brain and help in preventing stress, fatigue, insomnia, and tiredness. The oil obtained from the tree has diaphoretic properties that focus on increasing sweating and effectively reducing fever.\n\n");
    }
}

int main() {
    int u1=702877,u2,p1=123457,p2;
    printf("\n<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    printf("><><><><><><><><><><><><><><><><><><><><><><><><><><><><> PLANT IT <><><><><><><><><><><><><><><><><><><><><><><><><><><\n");
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><> My Celebration My Tree <><><><><><><><><><><><><><><><><><><><><><><>\n");
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><> Created by: Patel Hely <><><><><><><><><><><><><><><><><><><><><><><>\n");
    printf("><><><><><><><><><><><><><><><><><><><><><><><><><><><><>PID No:638<><><><><><><><><><><><><><><><><><><><><><><><><><><\n");
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    printf("\nEnter the User ID:\n");
    scanf("%d",&u2);
    printf("\nEnter the Password:\n");
    scanf("%d",&p2);

    if((u1==u2)&&(p1==p2)){
        printf("\nWELCOME\n");
        home();
    }
    else{
        printf("Wrong User ID or Password");
    }
}

int home(){
    int a=0;
    while(a!=5){
    printf("1. About Us\n");
    printf("2. Book A Plant\n");
    printf("3. Contact Us\n");
    printf("4. Tree Species\n");
    printf("\nPress <1> to know about us\n");
    printf("Press <2> to book a plant\n");
    printf("Press <3> to contact us\n");
    printf("Press <4> to know about tree species\n");
    printf("Press <5> to exit\n");
    scanf("%d",&a);
    if(a==1){
        about_us();
    }
    else if(a==2){
        book();
    }
    else if(a==3){
        contact_us();
    }
    else if(a==4){
        tree_species();
    }
    else if(a!=5){
        printf("\nWrong Selection\nSelect Again\n\n");
    }
    }
    return 0;
}
