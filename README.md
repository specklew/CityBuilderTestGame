# CityBuilderTestGame

TL;DR: **Only hex generator** and **cartoony graphics** as for now; written in **blueprints**; it weights a couple of **gigs**; **assets** used below.

This is an example city builder game with a procedurally constructed hex grid map. Feel free to use it however you'd like (every additional asset used in this project is CC0). A better documentation (more like an explanation of how things work) of this project will probably be available as soon as I get the basic features working.

The project is mostly written using unreal **blueprints**.

Keep in mind that the whole project weights a **couple of gigabytes**. If you want to see only the important stuff go to:
- Content > Blueprints
- Source > CityBuilderTestGame

and download the stuff that's there. *Though the blueprints probably wont work without the rest of the project...*

Enjoy!

## Current Progress

Currently the project contains a hexagonal grid map generator. The grid tiles spawn decorational static meshes on them. The hex tile generator right now instantiates tiles by using the add actor component node but I plan to have it instantiate tiles using the instanced static mesh down the road (because performance rn is just bad).

Additionally, the project also includes:
- RTS camera setup.
- Cartoony water shader with riples. 

### Screenshots

![image](https://github.com/specklew/CityBuilderTestGame/assets/76997864/0a5f71e5-d924-4b81-b0ae-341a568e65ed)

## Future Plans

Currently working on: Lumberjack AI.

Next:
- NPC running around the map.
- Grid generator using instanced static meshes.
- Some kind of an interaction system with the NPC. (To make them build for you!)

If you have any other suggestions, please send them to me!

## Other

Meshes of the decorations on the tiles downloaded from [here](https://kenney.nl/assets)

Developed with Unreal Engine 5.2.1.
