# Project Yoda: A R.M.A.D.S.D. TALE
### A documented decline in mental consiousness, By Will Lawson.

## Contents:

### Introduction:

### Technologies:

####  Virtual design Mediums :

        - 3D Scanning:

        - Motion Capture:

        - Haptic Sculpting:

        - CAD Programs:

                ~   Fusion 360

                ~   Blender

                ~   Auto Desk 123D

                ~   Mesh Mixer

                ~   Tinker CAD

####  Physical Production Mediums:

        - 3D Printing

        - Laser cutting

        - Resin Casting

### Concept:

        - Project Premise:

        - Project MOSCOW:

### Hardware considerations:

        - Hardware:

        - Hardware Cost Evaluation:

### Design:

        - Software Choices:

        - Design Concepts:

        - Development iterations:

### Production:

        - Selected Production Mediums:

        - Prototype Development cycles:

        - Conclusion and Reflection:

### References and Citations:

### Appendices:
        - Component Source
        - Instruction guide
#

# Introduction:

        The Aim of this project is to experiment, research and develop a test bed artefact,
        using conceptual design fundamentals such as hinged elements,
        and mediums of replicated synthetic nature, in this circumstance, "skin-based elements".

        On a simplistic basis the premise of the project occupies an area of animatronics and embedded system design,
        in order to try and replicate a character-based model with a varying degree of programmable interactivity.
        
        This document will cover the iterative design process from available technologies and how best to utilise them, 
        if at all in some cases, for the relevancy and requirements of the project, 
        to the potential future developments and refinement of the prototypes artifact for further production.

# Technologies:

        For the duration of this project, I had access to a multitude of physical production means, as well as,
        virtual design and development tools for utilisation within the greater development process.

        Utilising the information of the range of available technology allowed for a more in depth,
        and informed understanding of what would be capable within the project scope and budget.
For A comprhensive view of technologies, and evaluation of the resources, see: 
https://github.com/willlaws35/Project-Yoda/blob/main/Production%20Methods.md

# Concept:

The basis of the project maintained two main parameters for an artefact to be constructed, " skin based element" and a hinged component.

As a result of extremely loose parameters, the project gave rise to the opportunity to diversify technologies and offer the ability for innovation and creative to take form.

## Project Premise:

Fundamentally, whilst incorporating the initial parameters, the intention was to create a character based animatronic statuette.

The Character of Yoda was chosen for the purposes of Yoda being a "cool" character, as well as having basis in puppetry and animatronic origins in live action media, meaning that source material and reference points to character design is readily available, furthermore, Yoda is "cool".

Basing the parameter now of character design, the considerations for programmable motorised movements proved appealing to create a level of realism and interactivity with the artefact.

As a result of programmable motor control being a desirable aspect of the artefact, inherently a method of programming the motors must be included to program PWM inputs.

## Project MOSCOW:

The Moscow structure allows a project to outline the initial parameter of what, must be included, Should be included, Could be included, and finally what the project will not include.

### Must Have:

Hinged element incorporated into the design, preferably custom in nature allowing for a level of use or articulation to a component.

"Skin" based element, creating a sense of realism to the project either replicating a skin texture and material, or to the extent of feathers / fur should the thematic sense of the project requires it.

### Should Have:

Servo Motor enabled points of articulation, due to project scope and time frame, this may range from one to three motors based on budgetary restraints.

Micro controller, motor driving integration allowing for programmable actions and movements.

### Could Have:

MP3 Audio Playing capabilities, and respective sound system allowing for pre-loaded speech/ sound effects allowing for increased realism of the project.

### Won't Have:

Due to not being able to work miracles, the project will remain stationary, excluding the need for traction-based movement, or simulated walking, in order to increase the reliability and integrity of the project.

# Hardware considerations:

Considering the intended expansion into adding program based capabilities to the project, it is essential to consider what electronic hardware will be utilised in the project scope.

### Hardware:

Due to the smaller scale of the project and autonomy being a core focus, the shift in view focuses on embedded systems and micro controllers.

Given the significance of embedded systems, micro controllers for both hobbyist and professional use are available in diverse abundance.

For the project consideration, our sights will be set on three main options, raspberry pi's, Arduino, and teensy, microcontrollers.

Raspberry pi's are highly capable boards, with some of the proposed portfolio managing wi-fi integration, however as a result the controller reaches a price point and level of sophistication not necessarily suitable for the project scope, therefore will not be used in the base design and control of the projects system architecture.

Arduino and Teensy microcontrollers, are arguably similar in a number of ways, both utilising the same base programming environment, the main differences come in the form of performance values, the teensy

microcontrollers maintain a much smaller physical profile in comparison to Arduino processors, however offer magnitudes more processing capabilities, unfortunately as a result, and similar to the issue of price proving excessive for the for the project scope and requirements.

As something of a logical elimination of controllers the Arduino system offers an affordable platform for integration to the system, whilst also providing room for developmental expansion should further features be added in development, or as a test bed artefact for electronic component testing.

### Hardware Cost Evaluation:

The microcontroller proves integral for the majority of the system to be able to function independently, besides controller, a design approach of 3 motors is considered to allow for head point of articulation, and a point of articulation for each arm.

Further potential considerations for the audio system would prove useful and an interesting development to increase the realism and range of system abilities.

| Component | Quantity | Cost / unit |
| --- | --- | --- |
| Arduino Uno | 1 | £10-15 |
| Servo Motors | 3 | £3-5 |
| MP3 module | 1 | £5-6 |
| Speaker | 1-2 | £4-5 |


Whilst this costing analysis for the components is respective to the cost per fully produced prototype, the ability of bulk buying some of these components will result in a lower overall cost per prototype ratio.

# Design:

Beginning the design process requires certain conditions and design parameters to be understood, in order to maintain consistency in the overall design and end product, for example in this circumstance, dimensional volume and relative scaling of the design to stay proportionally in line with the character dimensions, as well as ensuring that the designed components maintain compatibility to the chosen electronic components.

## Software Choices:

For the development course of this project numerous software components were used where appropriate to ensure a level of optimisation when it comes to prototyping assemblies in an appropriate time frame.

### Auto Desk 123D
        123D was responsible for the bulk of asset development for this project, 
        utilising its intuitive tool design and transferability in file types,
        and manipulation, may structures which would have taken significantly longer to be produced,
        or even in some cases would be impossible to create through differing means, 
        could easily be created and iterated should the development process require it.
        
### Mesh Mixer 
        Mesh mixer was used for the purposes of modifying,
        high resolution complex components of this design which struggled to be handled within 123D.
        Being able to normalise and create more manufacturing friendly surfaces,
        allowed for a more reliable and efficient production process,
        due to a reduction in required clean-up work and model refinement after the fact. 
 
 ### Cura
        Cura is essentially an intermediary program called a slicer,
        which allows typical 3d modelled files to be translated in a means which is suitable for 3D printing, 
        which resulted in being one of the most heavily used attributes of the artefacts production process.
        By altering internal parameters of the slicer, many factors relating to the subsequent outcome of the structure, 
        relating from strength, to external resolution for sections which require higher detail. 
        
### Arduino        
        The Arduino software, while not used for designing physical components,
        is used for programming the integrated electronic components of the prototype.
        Therefore, plays an essential role in the software design of the artefact. 
        
### Adobe Illustrator        
        Adobe illustrator is utilised in this context with the available laser cutting platform,
        to create vector based graphics suitable to be used with laser cutting machines, 
        alternative software can be used, however the available machines for the purposes of easy use,
        are recommended to utilise the software. 

## Design Concepts:

Conceptual design resulted in the use of the microcontroller component as a structural element in the endo skeleton of the artefact, by allowing the controller not to be encased in typical systems, not only does this provide a scalable constant for the model, it also provides easily accessible I/O interfacing meaning that ease of wiring and expansion is considerably improved.

Considering the mandatory usage of a hinge development, the most appropriate location would be within the arm sub-assembly, due to the scale of the model, choosing an articulated hand assembly would be possible, however given the scale, it would most likely result in fragile elements, therefore placing the hinged element as an elbow based substitute would provide enough deign space to ensure the part would maintain a degree of structural integrity.

With Regards the requirement of a "skin-based" elements, the most appropriate usage within this artefacts contents, would be with respect the organic structures of the project, (head, hands, and feet).

Recasting the organic elements from 3d printed master models will allow for material properties closer to a level of realism in the artefact.

## Development iterations:

The design resulted in an assembly of 7 parts, 6 of which are purely unique parts.

The artefact consists of the following:

- Head x1
- Left Hand x1
- Right Hand x1
- Upper Body x1
- Lower Body x1
- Arms x2

The components listed then can be divided based on functional components, and organic components, as a result both hands and the head structures being classed as organic, and the remainder portions remaining classed as functional structures.

Most organic components were created and normalised within Mesh Mixer, as a result maintain high resolution to the components and required minimal adaptation to connect to the remainder of the functional components.

The components designed within 123D required considerably further understanding and developed integration on the basis of production method parameters.

The upper and lower body sections required a significant over view due to the intention to have these components integrate with the micro controller as a result parameter for motor fitment and screw hole tolerances.

![](RackMultipart20230402-1-8ei680_html_c7664ba4f1ada894.png)

![](RackMultipart20230402-1-8ei680_html_15c2e2ef725b3cb.png)

Considerations for the lower section resulted in the property that the hexagonal cut-out section being specified dimensions for the motor cable adaptor to pass through to minimise excess cabling in the system.

Furthermore due to consideration as to the featuring of overhanging structures in the components, these portions are capable of being produced with minimal utilisation of support material in the 3D printing process.

The remaining segment of the bulk of the cad components, is the arms.

The arms maintained a couple of highly important parameters, with regards the hinge segment, however it also had to interface to the motors responsible for the arm motion.

The motor mounting point was designed to maintain a tight fit to the drive gear of the motor, however it was also designed to incorporate a degree of tolerance play to allow the arms once moving to not strain the motor causing potentially catastrophic damage, but would rather use the tolerance to reduce the motion expelled on an obstacle or object saving the greater artefact and electronics from excessive strain.

In conjunction to the mounting section the arm portion went through significant variation based on feature inclusion and the proportional relation of the arms with respect the remaining artefact.

## Version 1/2:

![](RackMultipart20230402-1-8ei680_html_c305f6825a3e3c4e.png)Due to system limitations, Version 1 remained problematic, therefore Version 2 is merely the restoration of the first trial version of the prototype component.

The Resultant design had some relatively well rounded geometry for the intention of future layering to the animatronic being able to smoothly flow rather than "catch" on any protruding design elements.

However, due to not having a life size Yoda as reference, the proportions of this concept would have created an impractical and inaccurate silhouette, furthermore this design did not maintain any hinged integration as the development and debate with regards to the hinges positioning was still being considered.

## Version 3:

Version three managed to refine the proportional issues of the previous design, given these new scaling parameters, utilising this structure would have given the prototype more realistic proportional expectations, however this design still does no include a hinged element which would reduce overall fluidity in design and operational motion of the artefact.

![](RackMultipart20230402-1-8ei680_html_45d756d07b829b48.png)

## Version 4:

Version four, was something of a complete redesign, occupying a similar dimensionality of version three, however incorporates the desired hinged element, in a method designed specifically for 3D printing.

The type of hinge incorporated in this design most commonly is referred to as a print in place hinge, this hinge, which by other production means is not possible, utilises the incremental z axis build of the 3D printer to create nested free standing structures, similar to the cross sectional view of Russian nesting dolls.

![](RackMultipart20230402-1-8ei680_html_7ec13958330a1129.png)By utilising the concepts system of creating interlocked parts (in this case a pivot point, and pivot plates) a singular designed part can incorporate multiple components in a singular production process meaning that assembly time and external hardware is drastically reduced, creating a compound structure which is easy to replace and substitute when required to maintain the hinged components accelerated wear in comparison to more static elements of the artefact.

## Version 5:

Version Five maintains an identical pinion system to that of version four, however shortens the overall length to bring the newly added hinged portion into proportional realism ensuring a relative proportional equilibrium in the artefact.

![](RackMultipart20230402-1-8ei680_html_d436e99ff1b5654e.png)

# Production:

Now considering the refinement of the arm design, all required components are suitably developed as far as reasonably possible in a software basis, therefore primary prototype and production is the next developmental process.

## Selected Production Mediums:

Due to the choice of utilising a print in place component for the structure, 3D printing is ultimately the most viable medium to quickly and effective produce the majority of the components of this project.

Further considerations were given to using specifically FDM means of production, as using SLA and resin prints tend to provide more brittle and more difficult to modify parts for the purposes of testing the combination of the components together.

The choice was further made to utilise PLA, as the main material choice due to its "relatively" safe properties, and ease of printing, meaning that the success of a print job is significantly higher and can account for greater atmospheric temperature fluctuations.

For the purposes of reference, the specific 3D printer used was an Ender 3 Pro, which ordinarily provides suitable quality of prints, however in conjunction with years of developing understanding of software based parameters and impactful hardware alterations, I had been able to tune the machine for improved quality, and time of prints, which proved greatly beneficial for the purposes of rapid development.

## Prototype Development cycles:

Since all components were suitably ready for initial tests, and due to being previously acquainted with the Arduino micro controller, most components were available on hand.

The first component to be produced was the head of the artefact.

Since the initial component was produced successfully further components and assembly went ahead to form the resemblance of the torso section.

![alt text](https://github.com/willlaws35/Project-Yoda/blob/main/Yoda%20Img/IMG_4959.JPG)

![alt text](https://github.com/willlaws35/Project-Yoda/blob/main/Yoda%20Img/Yoda%201.png)

Upon assembly of the upper and lower torso section, due to being early developmental stages, a speaker was added as a substitute "piezo buzzer" which would allow the ability of programming hertz values, to play rudimentary sounds and somewhat recognisable songs.

Also proof of concept for the utilisation of the microcontroller endo skeleton structure proved to be reliable, offering easy I/O access in conjunction of reducing material usage and providing strength across the main body section.

![alt next](https://github.com/willlaws35/Project-Yoda/blob/main/Yoda%20Img/Yoda%202.png)

With the addition of the arm components and the hand segments, the functional premise of the artefact Is complete, however evidently is far from being accomplished to the desired level of realism.

To develop the artefact, I opted to attempt sufficient recollection of GCSE textiles to outfit the character with robes of sorts, which would provide a sense of depth rather than just the pure mechanical endo skeletal structure.

![alt text](https://github.com/willlaws35/Project-Yoda/blob/main/Yoda%20Img/Yoda%20Grey%20Robes%20Not%20Broke.jpg)

The primary robe concept consisted of three main attributes, an under and outer cloak, and a hand woven belt.

Whilst the colouring for the artefact is not near its conclusion, with the outfitting it provides a suitable level of insight as to the intended look of the assembled project.

![alt next](https://github.com/willlaws35/Project-Yoda/blob/main/Yoda%20Img/Yoda%20grey%20robes.png)

Initial painting resulted in a highly inaccurate colour palette, however as a result, it allowed for two main focuses, further experience of hand painting, and the addition of a walking stick to add to the thematic presence of the character.

Due to the test robe design proving that the internal armature is capable of operating, revisions to the selected material and a few cosmetic alterations were to be made to allow for higher model accuracy.

![alt text](https://github.com/willlaws35/Project-Yoda/blob/main/Yoda%20Img/Yoda%205.png)

The material selection and second revision of the robe design allowed for improved joint mobility as well as higher source material accuracy.

Further more the addition of the "lightsaber" accessories allowed for further character building and layering to the artefact for source material realism sake.

The main point of contention on the artefact at this stage is the paint choice, as its highly inaccurate and distracts from the colour properties expected from the character, therefore revisions were required.

![alt text](https://github.com/willlaws35/Project-Yoda/blob/main/Yoda%20Img/PNG%20Yoda/yoda.jpg)

Utilizing a better colour matched acrylic based paint allowed for a much more improved tone for the character, as a result the initial prototype of the artefact was complete developing the extents of basic audio synthesis, and programmable movements allowing for a simulated animatronic character.

After the first prototype three main developmental factors were to be considered, the stability of the artefact as due to the high density and low footprint size of the model it became prone to falling over, along with bother the reproducibility of the model, and finally improved audio for the purposes of better audio output.

The first issue which was countered was the audio generation, this was accomplished through the use of an external system to the Arduino called a "DF Player Pro" the device around 2 centimetres squared is capable of storing several hours of mp3 audio and providing communications with the Arduin should the desire in future be to connect and interface the two controllers to script lines and actions for further interactivity.

The second issue I faced was replicating the model, therefore two further prototypes were developed.

![alt text](https://github.com/willlaws35/Project-Yoda/blob/main/Yoda%20Img/Three%20Yodas.png)
Each of the three versions utilised the premise of if slightly differing hardware would reduce cost as well as improve the versatility of the designs compatibility with differing parameters, therefore both utilise a slightly modified Arduino board for improved ease of connectivity to the motors, and one of the two utilises a nylon based motor rather than the higher durability (and cost) metal geared motors, as a result no subsequent loss in power or ability to move was experienced, and due to less specialised gearing, the substitution lowers the cost of the project per unit going forwards.

Finally the issue of the stability of the system was resolved via an acrylic base which is bolted to the foot portion of the artefact and creates both a display platform and a more reliable surface for which the platform can be programmed and secured via.

## Conclusion and Reflection:

Overall as a project, the experience of being able to develop and create an artefact from the fundamental ground up has proven extremely insightful, the diverse range of available technologies, has meant even though not all the methods were utilised, and the choice to expand into differing technologies and software's highlighted how in the modelling process, conceptualisation requires a level of iterative development for the success of a projects overview.

Whilst during this project, my personal preferences of software and methods became increasingly prevalent, which even considering past experience, potentially being forced to diversify in approach to technology and methods may create for more innovation in the outcomes and in terms of the artefact, utilising the functionality of the generative design utilities in fusion 360 could have optimised the conceptual design to improve its overall standards.

In reflection the overall artefact remains successful of what it intended to do, and created a blend of design and embedded systems to what is most accurately represented as "desktop animatronics" whilst the reduction in degrees of freedom (DOF) on such a scale may not have the level of complexity of which show worthy production animatronic chassis' possess, it allows for an accessible platform for expansion and development utilising the character design basis for a more engaging artefact.

## References and Citations:
Auto desk (2017) "Autodesk is no longer offering 123D". Available at: https://www.autodesk.com/solutions/123d-apps

Bmoshe (Aug, 2011) "Yoda". Available at: https://www.thingiverse.com/thing:106500

Me, Myself, and I. (Jan 2023) "how to cry yourself to sleep" .

## Appendices:

Build plate sub-assemblies of all required parts, Available At: [https://github.com/willlaws35/Project-Yoda/tree/main/Yoda%20Parts/Yoda%20Required%20Parts](https://github.com/willlaws35/Project-Yoda/tree/main/Yoda%20Parts/Yoda%20Required%20Parts)

Assembly guide and instructions, Available At:

[https://github.com/willlaws35/Project-Yoda/blob/main/Yoda%20Doc/Yoda%20Assembly%20Instructions.docx](https://github.com/willlaws35/Project-Yoda/blob/main/Yoda%20Doc/Yoda%20Assembly%20Instructions.docx)
