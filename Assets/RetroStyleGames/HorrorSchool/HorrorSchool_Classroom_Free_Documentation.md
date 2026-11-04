# Horror School - Classroom (Free)

## Overview

One complete, furnished classroom of an abandoned American high school, taken from the Horror School Complete pack: walls with windows and the classroom door, vinyl floor, suspended ceiling with dim fluorescent lights, chalkboard, whiteboard, desks and chairs, lockers, shelves, safety equipment and small props. The teacher character and the corridor are not included (they are part of Horror School Complete). 44 ready prefabs (`<Set>/Prefabs/P_RSG_*`) built from 51 FBX models; the assembled, lit classroom is the demo scene of each render pipeline (`Scenes/HorrorSchool_Classroom_Demo_BiRP / _URP / _HDRP`), and every asset is laid out on the overview scenes (`Scenes/HorrorSchool_Classroom_Overview_*`). The pack contains no scripts: scenes, prefabs, models, materials and textures only.

The free pack is a subset of Horror School Complete: every model, material, texture and prefab keeps the Complete's path and GUID, so you can import the Complete into the same project later without duplicates. The six Classroom scenes and this document are free-only files. The ceiling light and classroom door prefabs ship here without the Complete's demo scripts (light flicker, door opening), and the window glass has a newer material and Base Color map; importing the Complete over the free pack replaces these files with the Complete's versions.

## Render Pipeline Compatibility

| Pipeline | Supported | Notes |
|---|---|---|
| Built-in | Yes | RSG Shader Graph; install **Shader Graph** from the Package Manager (step 0) |
| URP | Yes | same materials and prefabs, no conversion |
| HDRP | Yes | same materials and prefabs, no conversion |

One material set works in all three pipelines: every material uses the cross-pipeline Shader Graph `RSG_Lit` (shared with the other RetroStyleGames packs, `RetroStyleGames/Base/Shaders`). The demo and overview scenes exist once per pipeline because lights, cameras and volumes are pipeline-specific; the prefabs they place are the same.

## Technical Details

| Item | Value |
|---|---|
| Models | 51 FBX (static), 51 meshes |
| Prefabs | 52 (44 assets + 8 parts in `Architecture/Prefabs/Parts`: the classroom door frame, leaf, hinges, handles and wire glass, and the ceiling light seal) |
| Materials | 45 |
| Textures | 135 PNG (4 px: 4, 1024 px: 41, 1024x2048 px: 3, 2048 px: 81, 4096 px: 6) |
| Texture maps | Base Color `_BC` (44, sRGB; alpha = window opacity), `_MAS` Metallic R / AO G / Smoothness A (44, linear), Normal `_N` (44, OpenGL +Y), Emissive `_E` (3) |
| Total triangles | 104,472 (sum of unique meshes) |
| Total vertices | 100,729 (Unity vertex count, split at UV / normal seams) |
| Triangles per mesh | 2 (SM_RSG_CeilingTile) - 10,347 (SM_RSG_CeilingLightFailed) |
| Characters | None |
| LODs | No (LOD0 only) |
| UV channels | 1 |
| Vertex colors | No |
| Colliders | Every prefab has colliders: non-convex mesh colliders on architecture, furniture and props; a box collider on the leaf of the classroom door |
| Scale | 1 unit = 1 m, every prefab root at position 0 / rotation 0 / scale 1 |
| Scenes | 6: a demo (assembled, lit classroom with one camera) and an overview (every asset) per pipeline |
| Scripts | None |
| Unity version | exported from 6000.0.77f1, minimum Unity 6.0 |
| Dependencies | Shader Graph 17.0+ on Built-in (URP / HDRP include it) |

## Model

| Set | Mesh | Triangles | Vertices | Size (m) |
|---|---|---|---|---|
| Architecture | SM_RSG_Baseboard | 16 | 32 | 0.03 x 0.14 x 2.00 |
| Architecture | SM_RSG_BaseboardShort | 9 | 22 | 0.03 x 0.14 x 0.50 |
| Architecture | SM_RSG_CeilingGrid | 32 | 64 | 0.60 x 0.02 x 0.60 |
| Architecture | SM_RSG_CeilingLightFailed | 10,347 | 11,964 | 1.17 x 0.08 x 0.57 |
| Architecture | SM_RSG_CeilingLightSeal | 8 | 8 | 1.20 x 0.00 x 0.60 |
| Architecture | SM_RSG_CeilingTile | 2 | 4 | 0.58 x 0.00 x 0.58 |
| Architecture | SM_RSG_DamagedCeilingTile | 1,664 | 1,814 | 0.58 x 0.10 x 0.57 |
| Architecture | SM_RSG_DoorFrame_Classroom | 264 | 576 | 1.02 x 2.17 x 0.13 |
| Architecture | SM_RSG_DoorHandleBack | 164 | 115 | 0.14 x 0.03 x 0.05 |
| Architecture | SM_RSG_DoorHandleFront | 164 | 115 | 0.14 x 0.03 x 0.05 |
| Architecture | SM_RSG_DoorHingesFrame | 528 | 774 | 0.02 x 1.67 x 0.07 |
| Architecture | SM_RSG_DoorHingesLeaf | 396 | 612 | 0.03 x 1.67 x 0.07 |
| Architecture | SM_RSG_DoorLeaf | 552 | 966 | 0.90 x 2.02 x 0.09 |
| Architecture | SM_RSG_DoorWall | 540 | 1,320 | 2.00 x 3.00 x 0.20 |
| Architecture | SM_RSG_DoorWireGlass | 12 | 24 | 0.16 x 0.81 x 0.00 |
| Architecture | SM_RSG_Pilaster | 216 | 536 | 0.32 x 3.00 x 0.30 |
| Architecture | SM_RSG_VinylFloor | 2 | 4 | 1.00 x 0.00 x 1.00 |
| Architecture | SM_RSG_WallHalfPanel | 216 | 528 | 1.00 x 3.00 x 0.20 |
| Architecture | SM_RSG_WallPanel | 216 | 528 | 2.00 x 3.00 x 0.20 |
| Architecture | SM_RSG_Window | 3,244 | 7,936 | 1.68 x 1.94 x 0.24 |
| Architecture | SM_RSG_WindowWall | 648 | 1,584 | 2.00 x 3.00 x 0.20 |
| Corridor | SM_RSG_DoubleTierLocker | 785 | 1,121 | 0.41 x 1.82 x 0.46 |
| Damaged | SM_RSG_CeilingRubble | 3,152 | 7,710 | 0.60 x 0.08 x 0.48 |
| Furniture | SM_RSG_Bookshelf | 972 | 864 | 1.01 x 1.94 x 0.34 |
| Furniture | SM_RSG_CubbyStorage | 864 | 768 | 0.36 x 0.89 x 1.69 |
| Furniture | SM_RSG_DoubleDesk | 3,755 | 2,572 | 1.20 x 0.80 x 0.57 |
| Furniture | SM_RSG_FilingCabinet | 6,119 | 4,328 | 0.46 x 1.36 x 0.65 |
| Furniture | SM_RSG_OfficeChair | 6,845 | 4,315 | 0.65 x 1.13 x 0.65 |
| Furniture | SM_RSG_ProjectionScreen | 1,234 | 984 | 2.14 x 0.35 x 0.15 |
| Furniture | SM_RSG_Projector | 2,325 | 2,873 | 0.43 x 0.80 x 0.50 |
| Furniture | SM_RSG_StudentChair | 2,697 | 1,936 | 0.74 x 1.00 x 0.79 |
| Furniture | SM_RSG_TeacherDesk | 5,415 | 4,694 | 1.80 x 0.80 x 0.81 |
| Furniture | SM_RSG_TelevisionCart | 4,706 | 3,528 | 0.92 x 1.31 x 0.56 |
| Props | SM_RSG_Backpack | 9,734 | 5,857 | 0.50 x 0.55 x 0.46 |
| Props | SM_RSG_Binder | 3,509 | 2,425 | 0.33 x 0.04 x 0.22 |
| Props | SM_RSG_CardboardBox | 866 | 1,179 | 0.55 x 0.53 x 0.56 |
| Props | SM_RSG_Globe | 6,684 | 4,005 | 0.35 x 0.46 x 0.30 |
| Props | SM_RSG_HallPass | 964 | 928 | 0.63 x 0.03 x 0.19 |
| Props | SM_RSG_LunchTray | 1,408 | 929 | 0.53 x 0.04 x 0.37 |
| Props | SM_RSG_Paper | 12 | 24 | 0.21 x 0.00 x 0.30 |
| Props | SM_RSG_StorageTote | 1,975 | 2,509 | 0.46 x 0.28 x 0.35 |
| Props | SM_RSG_Textbooks | 1,400 | 1,808 | 0.32 x 0.24 x 0.25 |
| Safety | SM_RSG_ExitSign | 204 | 160 | 0.37 x 0.25 x 0.09 |
| Safety | SM_RSG_FireAlarm | 1,361 | 1,153 | 0.21 x 0.28 x 0.09 |
| Safety | SM_RSG_FireExtinguisher | 4,472 | 2,937 | 0.36 x 0.68 x 0.30 |
| WallFixtures | SM_RSG_Chalkboard | 860 | 738 | 3.37 x 1.38 x 0.13 |
| WallFixtures | SM_RSG_Clock | 4,808 | 3,308 | 0.67 x 0.67 x 0.17 |
| WallFixtures | SM_RSG_CoatHooks | 1,336 | 1,006 | 1.00 x 0.32 x 0.22 |
| WallFixtures | SM_RSG_CorkBoard | 68 | 144 | 1.47 x 1.09 x 0.04 |
| WallFixtures | SM_RSG_Telephone | 6,054 | 4,816 | 0.18 x 0.52 x 0.17 |
| WallFixtures | SM_RSG_Whiteboard | 648 | 1,584 | 1.68 x 1.15 x 0.20 |
| **Total** | | **104,472** | **100,729** | **51 meshes** |

## Textures

Every asset material has its own Base Color, MAS and Normal map; the ceiling light and exit sign also an Emissive map, the window glass uses its Base Color map for the emission. Shared materials (`Shared/`) cover wood, steel, rubber, plaster and paint on several props. Textures are 4 - 4096 px, all power of two.

## Features

- A full classroom on a 1 m grid: wall panels (full, half, window wall with windows, door wall), pilasters, vinyl and worn vinyl floor, suspended ceiling tiles (intact and damaged) with grid, baseboards, ceiling rubble
- Classroom door with a separate leaf pivot (frame, hinges, handles, wire glass)
- Classroom furniture: student chairs, double desk, teacher desk, office chair, bookshelf, cubby storage, filing cabinet, TV cart, projector and projection screen
- Wall fixtures: chalkboard, whiteboard, cork boards, clock, telephone, coat hooks
- Safety: exit sign, fire alarm, fire extinguisher; double-tier lockers
- Small props: textbooks, binders, paper sheets, globe, backpack, lunch tray, storage tote, cardboard boxes, hall pass
- Realtime night lighting in every pipeline (moonlight through the windows, dim fluorescent tubes)

## Included Content

```
Assets/RetroStyleGames/
  Base/Shaders/RSG_Lit.shadergraph      shared RetroStyleGames cross-pipeline shader
  HorrorSchool/
    HorrorSchool_Classroom_Free_Documentation.md
    Architecture/                       Models/  Materials/  Textures/  Prefabs/ (Prefabs/Parts)
    Corridor/                           double-tier locker (Models/  Materials/  Textures/  Prefabs/)
    Damaged/                            ceiling rubble
    Furniture/  Props/  Safety/  WallFixtures/
    Shared/                             shared Materials/ and Textures/
    Scenes/                             HorrorSchool_Classroom_Demo_{BiRP,URP,HDRP}, HorrorSchool_Classroom_Overview_{BiRP,URP,HDRP}
    Settings/URP/  Settings/HDRP/       pipeline assets and volume profiles of the scenes
```

## Demo Scene

Open `Scenes/HorrorSchool_Classroom_Demo_<Pipeline>` for your project's render pipeline. It shows the assembled classroom from `CAM_Main_Camera` at the door, looking at the board; there is no player controller, so Play shows the same view. The classroom door is closed (the corridor behind it is part of the Complete).

## Setup Instructions

0. **Built-in only:** install *Shader Graph* (Window > Package Manager > Unity Registry > Shader Graph, 17.0 or newer). URP and HDRP already include it.
1. Keep *Project Settings > Player > Color Space* on **Linear** (the default of the Unity 6 templates; the lighting was authored in Linear).
2. Import the package.
3. Open the demo or overview scene of your pipeline. For the demo look in URP / HDRP, assign `Settings/URP/RP_RSG_HorrorSchool_URP` or `Settings/HDRP/RP_RSG_HorrorSchool_HDRP` in *Project Settings > Graphics* (Default Render Pipeline) and *Quality* (Render Pipeline Asset); for Built-in, leave both empty. The scenes of the other pipelines need that pipeline's package.
4. Drag prefabs from `<Set>/Prefabs` into your own scenes. Keep the door prefab whole: the leaf is a child with its own pivot, so it can be rotated open.

## Notes

- GPU instancing is off on the RSG materials: on Built-in, Shader Graph's instanced path draws a whole instanced batch at one object's position. Keep it off when you duplicate materials for Built-in projects (URP / HDRP use the SRP Batcher instead).
- Emissive materials (ceiling light, exit sign, window glass) use the RSG `Emission` inputs; keep them when you duplicate the materials.
- The Built-in scenes are lit for the Built-in project defaults (*Project Settings > Graphics > Lights Use Linear Intensity* and *Use Color Temperature* off, as in a new Built-in project); turning them on brightens the Built-in scenes. Every Built-in scene light is *Important* (per-pixel). URP / HDRP always use linear intensity.
- Demo lighting is a realtime horror night tuned per pipeline (moonlight through the windows, dim fluorescent tubes, warm fills on the board, the exit light; 8 - 10 lights): URP with ACES tonemapping, bloom and post exposure -0.75 (`Settings/URP/VP_RSG_HorrorSchool_Demo_URP`), HDRP with fixed exposure EV 5.25 and a very dark Gradient Sky for the ambient fill (`Settings/HDRP/VP_RSG_HorrorSchool_Demo_HDRP`), Built-in with the same brightness through light intensities and a dim trilight ambient (no post-processing). No fog; ceilings stay dark on purpose. Raise the exposure for a brighter mood.
- The URP renderer (`Settings/URP/RP_RSG_HorrorSchool_URP_Renderer`) references the URP package's default Post Process Data; keep it assigned or the demo loses its tonemapping and looks flat and bright.
- Window glass is transparent and casts no shadow, so moonlight enters the room in every pipeline.
- The ceiling light prefab (`P_RSG_CeilingLightDim`) carries no Light, like every prop; the demo scenes place its tube lights under `Lights/`. Add a Light under the fixture when you place it in your own scene.
- Ceiling tiles are single-sided planes, meant to be seen from below. Above the demo ceiling a dark deck (upside-down floor pieces) and extra tiles over the damaged tiles and light fixtures close the view to the sky.
- In HDRP the window glass reads darker than in URP / Built-in: its brightness comes mostly from sky reflections, and the HDRP demo sky is very dark on purpose.
- All lighting is realtime; no lightmaps are baked.
- FBX and loose PBR maps for DCC editing are delivered separately.

## AI-Generated Content

Disclosed per Asset Store guideline 1.6: the 3D models and their textures were created with an AI-assisted workflow (AI image generation and AI image-to-3D generation) and then edited, retopologised, textured and prepared for real-time use by RetroStyleGames artists.

## Support

RetroStyleGames - https://retrostylegames.com

## License

Standard Unity Asset Store EULA.
