# Sara Zaki's Weekly Reports

## Week 4 (9/14 - 9/21)

The main task for the week was to connect my Photon2 to the internet. Not as challenging as last week's task - or so I thought. I took my device out of the box,  connected it to the USB cable provided and plugged it into the USB port of my computer. Creating a Particle account was the easiest part, and then I had to setup my Photon2. My computer just wouldn't detect the device - I unplugged, replugged, reset - nothing changed. The status light kept blinking blue, which meant it was in listening mode, so I knew the problem was not with the Photon2 but with my computer. After trying a different USB cable, I was able to connect my device propeerly. But then I got stuck in the next phase of the setup process - Update. 

![image](https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/eb9e5ec3-0682-4411-80af-e7a5457d20fe)

![image](https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/2d9791a5-4e77-47e2-9c4e-881203669a09)

![image](https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/99daf8c9-95a3-44af-b2b4-583cf4810536)

Fast forward many hours, I was finally able to set it up correctly. I flashed the device using the Particle Device Doctor and then tried again. Since I was using Berkeley IoT in my home, I wasn't able to connect it to the wifi using that network because I needed the MAC address. So, I connected it to my mobile hotspot instead. It finally worked!!! I am so happy. Now my Photon2 is all set up and I'm ready to take on the next task for the week. Yayy!!

### Speculations:

After doing some research, I realized that Particle's Photon2 represents a significant step forward in the world of IoT (Internet of Things) development and connectivity. As we engage with this hardware platform, it's intriguing to contemplate its future trajectory. One possibility is that we'll see even more compact and power-efficient iterations of Photon2. The demand for smaller, longer-lasting IoT devices continues to grow, especially in applications like wearables and environmental monitoring. Future iterations may integrate advanced power management systems, further extending battery life and reducing the environmental impact. Another exciting prospect is the evolution of the Particle ecosystem. There might be more integrations of more sensors, AI capabilities, and machine learning libraries into the Particle platform, making it easier for developers to create intelligent and data-driven IoT solutions. This could lead to the development of predictive maintenance applications, where connected devices can anticipate and prevent failures in real-time. Pretty cool, isn't it? I'm glad we get to work with this amazing piece of technology. Can't wait to see what my cohort creates with the Photon2 this semester :)


## Week 3 (9/07 - 9/14)
What a week! This was by far the busiest week I've had this year, with all the Rhino/Grasshopper tutorials, presentations, readings, etc. This week, I learned so much about parametric design (I'm so proud of myself). I went from creating rectangles last week to generating some pretty cool parametric shapes (or we can call them "vases") using Grasshopper. Here are some of the models I created:

![Screenshot 2023-09-14 132624](https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/959a0811-3a2a-4902-aabe-bdfa4174b8ee)

This one was sort of a failed early version that I created. Turns out there were so many things wrong with my code, which Cody was kind enough to take a look at, and helped me fix it. Yay!

These are the newer, improved versions of what I was trying to create:

![Screenshot 2023-09-14 132816](https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/941485ec-febf-42d3-ad92-c8730f810a19)
![Screenshot 2023-09-14 132710](https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/d12401e5-305d-4312-a496-838c53c5f362)
![Screenshot 2023-09-14 132655](https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/f8a385ca-8dc2-4171-81bd-3ea9226bd796)

At first, I tried to join the model, which was a mesh, with the existing cellphone stand, a brep, to sort of create a combinatioon of the two - it was supposed to be a cellphone stand with a mini vase popping out on top of it. But that was an epic fail - the conversion from brep to mesh really didn't work out. I even sought the assisstance of Jeff, who was super helpful and tried to help me figure it out. I was SO CLOSE (probably not). For the sake of time, I decided to improve upon the model I created from scratch and finally let the cellphne stand go :(

Good news is, I was able to change the "vase" model from a constructed mesh to a brep, so now, I can join the vase with the cellphone stand dif I wish to, but I won't right now due to the time crunch. I can always try that again after the deadline. I'm glad to say I have achieved my goal - challenge completed! I declare this an axolotl-level challenge from which I have gloriously emerged victorious! ヾ(*´ ∇ `)ﾉ

I think the reason why I ended up with a "vase" model was because I had to create a vessel for my Studio Foundations class and I couldn't get it out of my head. I just had to. And it turned out nicely, so, yay.
So, to create this model, I began with a point, which I then turned into a line, which I then divided into several points (for flexibility). I added a range so I could adjust the number of points I had. Next was the circles, created from the points, connected to a seam and further divided into more points around each circle. Next, the pattern was generated using dispatch and weave, which created circles in the already existing circles, fed to a polyline component, lofted and capped. That's it! This took me the entire week (including the weekend) to create. Needless to say, I'm not disapointed. Last week, I felt quite intimidated when I saw the creations of my cohorts in class - they were so cool - and I thought I would never be able to, but now I can finally say I created something nice too!

Here's a link to my video: [Sara's YouTube Video](https://youtu.be/CBZZ2_-XeWc)

Here are shots of my Grasshopper file:
![Screenshot 2023-09-14 132935](https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/fa3771b8-6956-45f1-a6b1-4a40f731e981)
![Screenshot 2023-09-14 132957](https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/45020818-3c6f-4782-b4eb-d535f73fb4b1)
![Screenshot 2023-09-14 133019](https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/8ad473ba-0c54-4473-86aa-37507eeeb6e0)
![Screenshot 2023-09-14 133035](https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/d6c62b27-612e-4cde-ae1c-9062af8617fd)

### Speculations:
Our journey as a cohort in mastering 3D design tools is an ongoing process. While we've encountered challenges in understanding Rhino and Grasshopper, I believe perseverance will be our greatest asset. As we move forward, I consider exploring other complementary tools like Tinkercad, Blender, or even game engines like Unity, which are increasingly used for design visualization and interactivity. 

A groundbreaking development in the 3D printing world caught my attention recently. Researchers at MIT have made significant progress in 3D printing with glass. They've developed a 3D printer capable of creating intricate glass structures, which has potential applications in architecture, optics, and even electronics.

Here's a link to the article: [MIT's 3D Printing with Glass](https://www.ll.mit.edu/news/new-method-3d-prints-glass-low-temperatures)


## Week 2 (8/31 - 9/07)
This week, I spent a  lot of time on Rhino and Grasshopper trying to learn more and work through some topics with which I've been struggling. I found some courses on Linkedin Learning which I took and watched the videos throughout the weekend. Some insights were gained, some confusions were made. Nevertheless, I picked up some new tricks along the way. I know it's not much but II just want to say that I have been practicing and I'm now getting used to the concept of parametric design using grasshopper. After trying a bunch of different things, I've learned how many of the components work, how to navigate the interface, manipulate parameters and how to "bake." Yay :) 
![image](https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/410e8e93-71b5-40af-89a9-230be5b8b268)



## Week 1 (8/24 - 8/31)

This week has been very exciting for me - from learning how to use Rhino to printing my very first 3D model. At first, I was just going to re-create the 3D phone stand from class, but then I thought I could create my own instead. The plan was to design a 3D stand for dancers, with a mechanical revolving top that uses motion tracking technology, which would make it easier for dancers to record their dance routines. But obviously, I was getting ahead of myself because there was no way I'd be able to create something like that, given my current skill set and level, in such a short amount of time. Nevertheless, it's the thought that counts :)

| | |
|:-------------------------:|:-------------------------:|
|<img width="1604" alt="Week 1 - 3D Phone Case 2" src="https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/d44daaf9-d85f-46c8-af93-25f5a9ec3b3b">  Week 1 Sketch |  <img width="1604" alt="Week 1 - 3D Phone Case 3" src="https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/d518e9a9-be27-49ce-a5ae-660e5f7d6893"> Week 1 Product|

I made a rough sketch of what I wanted it to look like. Not as detailed as I'd hoped but right now I'm working on improving my sketching skills. I, then, took the measurements of my phone, allowing for some wiggle room around the phone holding area of the stand. I tried to desiign the ephone case directly in RHino and failed several times. After many attemps, I tried to design it in Fusion360 instead, where I found success on the second try. So, I took my learnings from the Fusion360 and applied them to my designs in Rhino. Little progress was made, but gradually, I think I got the hang of it. I spent numerous hours tinkering with the software before I was able to fully design the 3D phone stand, luckily. To be honest, if I were asked to redo the design exactly the same way in Rhino, I think I'd be lost. I'm still watchcing tutorials on how to use Rhino properly and don't even get me started on Grasshopper. I still can't wrap my head around it. But I won't stop trying. Someday, hopefully in the near future, I know I'll be able to effectively use Rhino to create whatever design I can dream of andd I can't wait for that day to come.

The rapid evolution of 3D design tools is both promising and challenging. In the near future, we can anticipate more accessible and user-friendly interfaces. Machine learning and AI integration might help streamline the design process, offering real-time suggestions and automation for intricate tasks like Grasshopper scripting. Additionally, cloud-based collaboration and real-time rendering capabilities could become standard features, making it easier for designers to work together seamlessly across the globe. The convergence of augmented reality (AR) and 3D modeling tools might also offer exciting opportunities for more immersive and interactive design experiences. In the coming weeks, I aspire to delve deeper into mastering Rhino and explore Grasshopper with determination. Grasshopper's visual programming paradigm may become less daunting with practice, and its potential for parametric design will probably unlock new creative dimensions for me. In the future, I hope to incorporate emerging technologies such as sensor fusion and gesture recognition, enabling my 3D phone stand to respond dynamically to the dancer's movements. This fusion of design and technology holds the potential to revolutionize the field of performance recording. Additionally, I will dedicate my time to improving my sketching skills. As I navigate the evolving landscape of 3D design, I shall embrace the challenges as opportunities for growth and innovation.

Recently, I came across an exciting development in the field of 3D design and manufacturing. Adidas, the renowned sportswear company, has unveiled a project called "Futurecraft.STRUNG." They have created a 3D-printed performance shoe upper using a new technique called "strung" which involves robotic threading of textile material to create intricate and customized designs. This not only showcases the capabilities of 3D printing but also highlights the potential for personalized, high-performance products in the sports industry. This innovation is inspiring as it demonstrates how 3D design and printing technologies are pushing the boundaries of what's possible in product design and manufacturing. It's a reminder of how the skills we are developing in this class can have a real impact on industries beyond just 3D modeling and can lead to groundbreaking advancements in various fields.

Here's a link to the article: [Adidas Futurecraft.STRUNG](https://www.adidas.com/us/blog/562694-our-new-textile-innovation-meet-futurecraftstrung).
And the video: [Watch Video](https://www.adidas.com/us/futurecraft)



### Photo Dump
| | | |
|:-------------------------:|:-------------------------:|:-------------------------:|
|<img width="1604" alt="Week 1 - 3D Phone Case 2" src="https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/33216942-6914-42b9-a4df-5b15a26e1a56">  3D Phone Stand |  <img width="1604" alt="Week 1 - 3D Phone Case 3" src="https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/f1e4456f-94dd-4166-86a6-ce596bea1a4d">|<img width="1604" alt="Week 1 - 3D Phone Case 4" src="https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/5f7facc4-7232-4cf6-a5b9-08f5abab8be8">|
|<img width="1604" alt="Week 1 - 3D Phone Case 5" src="https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/439ddc37-9327-4529-a08c-f0ea5c50aa1a">  |  <img width="1604" alt="Week 1 - 3D Phone Case 6" src="https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/6834c7bd-a893-48bb-b706-a0a7d60afd6d">|<img width="1604" alt="Week 1 - 3D Phone Case 7" src="https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/7c3dd215-9729-4852-9eb5-d94135806c65">|
|<img width="1604" alt="Week 1 - 3D Phone Case 8" src="https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/2aa55156-d4de-48b0-9bc0-893de4101523">  |  <img width="1604" alt="Week 1 - 3D Phone Case 9" src="https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/56972edf-62a0-472c-a02a-6ffc8704a72e">|<img width="1604" alt="Week 1 - 3D Phone Case 10" src="https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/984b7c64-7723-4795-8454-fca6fd7f0098">|
|<img width="1604" alt="Week 1 - 3D Phone Case 11" src="https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/ac412f58-6d87-49a4-8325-99e209a31079">  |  <img width="1604" alt="Week 1 - 3D Phone Case 12" src="https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/1255193e-ab7c-47b7-a55f-ad9144ff7dd7">|<img width="1604" alt="Week 1 - 3D Phone Case 13" src="https://github.com/Berkeley-MDes/tdf-fa23-sarazaki/assets/143126838/da6de8bf-c6ef-43d6-847e-c070c16d9b69">|
