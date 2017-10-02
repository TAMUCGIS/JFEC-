# JFEC-Wildcat

JFEC-Wildcat or otherwise known by the TAMUC GIS group (Joe's Fly Eye Camera), is a fork of the wonderful PARCV image processing system,
made by Erlang Solutions. The software is licensed under the Apache 2.0 License. 

JFEC is a test in parallel/distributed systems, in that instead of 4 raspberry pi computers, we are using 48, with 48 cameras. 

This system is used for image processing on a large scale, based on Erlang in the clients and Open CL for the server. 
The photos are then processed by Open MVG in another server, to make a 3D model of the image. 

The benefit of this model is that we can ensure that the clients can be switched out without the total system crashing (thanks Erlang!)
as well as the ability to scale based upon hardware. 


