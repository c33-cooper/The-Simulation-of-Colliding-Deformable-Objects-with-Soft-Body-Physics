
# The Simulation of Colliding Deformable Objects with Soft-Body Physics (v1.1.0)

## How to access project
Git Clone HTTPS Url: https://github.com/c33-cooper/The-Simulation-of-Colliding-Deformable-Objects-with-Soft-Body-Physics 

•	Application executable is located in project directory – 
•	11015108_TheSimulationOfCollidingDeformableObjectsWithSoftBodyPhysics – Engine – Debug – Engine.exe
•	Note – Project must be run on a system with DirectX 11.0 or higher (Otherwise will throw an error message, also system must have D3D_FEATURE_LEVEL_11_0 or higher).

## DirectX 11 Libraries 
All DirectX libraries have been provided in the repository with Include, Libs and User Runtimes.
Note – If being run in Microsoft Visual Studio – Platform Toolset must be set to 2012 version. Also, to link the DirectX include headers and required lib must be done in the project properties settings within Visual Studio. 
NOTE:
(A visual guide of how to do this will be provided alongside the project within the repository).

## Visual Studio 2012 deployment -

All the correct DirectX libraries have been provided in the project 'DX11' directory and should be linked correctly within the visual studio properties under the following file paths:

Additional include directory should be linked to : DX11 -> Include
Additional library directory should be linked to : DX11 -> Lib -> x86

And Finally End User Runtime should be placed in the debug or project directory if error is produced which states "missing Direct3d..... .dll" or something which is similar.

## CONTROLS:

Car chassis movement - 

Forwards -		(UP ARROW KEY)
Backwards -		(DOWN ARROW KEY)
Rotate right -	(RIGHT ARROW KEY) 
Rotate left - 	(LEFT ARROW KEY)

Raise camera height - 		When located of the terrain for an aerial view - (A KEYBOARD KEY)
Decrease camera height -	When located of the terrain for an aerial view - (Z KEYBOARD KEY)

Exit application - (ESCAPE KEY)
