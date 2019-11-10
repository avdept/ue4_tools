# Levelable Component

This component allows your actor to have a levelable ability, which will change mesh depending on its level. 
This can be used for any strategy or any other game where you need to level up some of your actor's mesh. 

# Installation

* Put provided files into `/source` directory and recompile your project. Make sure you replace `PROJECT_NAME_API` with your's
* Add component as subcomponent to your blueprint

<img width="686" alt="Screenshot 2019-11-10 at 19 20 04" src="https://user-images.githubusercontent.com/1757017/68548311-3687e280-03f4-11ea-943f-07961f37d30e.png">

# Usage

Once added as subcomponent you can now use it in your project. It has 2 properties under `Levelable Component` section. By default component provides own mesh component so you can use it as a root component
<img width="359" alt="Screenshot 2019-11-10 at 19 42 05" src="https://user-images.githubusercontent.com/1757017/68548335-6636ea80-03f4-11ea-8bfd-29d37c091b0c.png">

* `objectLevel` is a level your component has, by default set to 1
* `levelsMap` is a map where key is level number and value is a mesh that should be used for this level

Component also provides a blueprint function that allows you to change level in runtime.

<img width="1046" alt="Screenshot 2019-11-10 at 19 20 13" src="https://user-images.githubusercontent.com/1757017/68548375-dfced880-03f4-11ea-90ed-2f52954ce62b.png">
