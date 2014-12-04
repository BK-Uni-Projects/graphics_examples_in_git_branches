#include <GL/glew.h>

//A 0.5 x 0.5 x 0.5 cube, origin centered, with colours and texture coordinates per face
//6 faces
//12 triangles
//36 vertices (no indexing) (4 floats each)
//36 colors (4 floats each)
//36 texture coordinates (2 floats each)

const GLfloat cubeWithColorAndTexturesCoordinates[] = {

	//positions
	-0.25f, -0.25f, -0.25f, 1.0f,
	-0.25f, -0.25f, 0.25f, 1.0f,
	-0.25f, 0.25f, 0.25f, 1.0f,

	-0.25f, -0.25f, -0.25f, 1.0f,
	-0.25f, 0.25f, 0.25f, 1.0f,
	-0.25f, 0.25f, -0.25f, 1.0f,

	0.25f, 0.25f, -0.25f, 1.0f,
	-0.25f, -0.25f, -0.25f, 1.0f,
	-0.25f, 0.25f, -0.25f, 1.0f,

	0.25f, 0.25f, -0.25f, 1.0f,
	0.25f, -0.25f, -0.25f, 1.0f,
	-0.25f, -0.25f, -0.25f, 1.0f,

	0.25f, -0.25f, 0.25f, 1.0f,
	-0.25f, -0.25f, -0.25f, 1.0f,
	0.25f, -0.25f, -0.25f, 1.0f,

	0.25f, -0.25f, 0.25f, 1.0f,
	-0.25f, -0.25f, 0.25f, 1.0f,
	-0.25f, -0.25f, -0.25f, 1.0f,

	-0.25f, 0.25f, 0.25f, 1.0f,
	-0.25f, -0.25f, 0.25f, 1.0f,
	0.25f, -0.25f, 0.25f, 1.0f,

	0.25f, 0.25f, 0.25f, 1.0f,
	-0.25f, 0.25f, 0.25f, 1.0f,
	0.25f, -0.25f, 0.25f, 1.0f,

	0.25f, 0.25f, 0.25f, 1.0f,
	0.25f, -0.25f, -0.25f, 1.0f,
	0.25f, 0.25f, -0.25f, 1.0f,

	0.25f, -0.25f, -0.25f, 1.0f,
	0.25f, 0.25f, 0.25f, 1.0f,
	0.25f, -0.25f, 0.25f, 1.0f,

	0.25f, 0.25f, 0.25f, 1.0f,
	0.25f, 0.25f, -0.25f, 1.0f,
	-0.25f, 0.25f, -0.25f, 1.0f,

	0.25f, 0.25f, 0.25f, 1.0f,
	-0.25f, 0.25f, -0.25f, 1.0f,
	-0.25f, 0.25f, 0.25f, 1.0f,




	//colors

	0.0f, 0.0f, 1.0f, 1.0f,
	0.0f, 0.0f, 1.0f, 1.0f,
	0.0f, 0.0f, 1.0f, 1.0f,

	0.0f, 0.0f, 1.0f, 1.0f,
	0.0f, 0.0f, 1.0f, 1.0f,
	0.0f, 0.0f, 1.0f, 1.0f,

	0.8f, 0.8f, 0.8f, 1.0f,
	0.8f, 0.8f, 0.8f, 1.0f,
	0.8f, 0.8f, 0.8f, 1.0f,

	0.8f, 0.8f, 0.8f, 1.0f,
	0.8f, 0.8f, 0.8f, 1.0f,
	0.8f, 0.8f, 0.8f, 1.0f,

	0.0f, 1.0f, 0.0f, 1.0f,
	0.0f, 1.0f, 0.0f, 1.0f,
	0.0f, 1.0f, 0.0f, 1.0f,

	0.0f, 1.0f, 0.0f, 1.0f,
	0.0f, 1.0f, 0.0f, 1.0f,
	0.0f, 1.0f, 0.0f, 1.0f,

	0.5f, 0.5f, 0.0f, 1.0f,
	0.5f, 0.5f, 0.0f, 1.0f,
	0.5f, 0.5f, 0.0f, 1.0f,

	0.5f, 0.5f, 0.0f, 1.0f,
	0.5f, 0.5f, 0.0f, 1.0f,
	0.5f, 0.5f, 0.0f, 1.0f,

	1.0f, 0.0f, 0.0f, 1.0f,
	1.0f, 0.0f, 0.0f, 1.0f,
	1.0f, 0.0f, 0.0f, 1.0f,

	1.0f, 0.0f, 0.0f, 1.0f,
	1.0f, 0.0f, 0.0f, 1.0f,
	1.0f, 0.0f, 0.0f, 1.0f,

	0.0f, 1.0f, 1.0f, 1.0f,
	0.0f, 1.0f, 1.0f, 1.0f,
	0.0f, 1.0f, 1.0f, 1.0f,

	0.0f, 1.0f, 1.0f, 1.0f,
	0.0f, 1.0f, 1.0f, 1.0f,
	0.0f, 1.0f, 1.0f, 1.0f,




	//texture coordinates
	
	0.0f, 0.0f,
	1.0f, 0.0f,
	1.0f, 1.0f,

	0.0f, 0.0f,
	1.0f, 1.0f,
	0.0f, 1.0f,

	0.0f, 1.0f,
	1.0f, 0.0f,
	1.0f, 1.0f,

	0.0f, 1.0f,
	0.0f, 0.0f,
	1.0f, 0.0f,

	1.0f, 0.0f,
	1.0f, 1.0f,
	0.0f, 0.0f,

	1.0f, 0.0f,
	0.0f, 1.0f,
	1.0f, 1.0f,
	
	0.0f, 1.0f,
	0.0f, 0.0f,
	1.0f, 0.0f,

	1.0f, 1.0f,
	0.0f, 1.0f,
	1.0f, 0.0f,

	0.0f, 1.0f,
	1.0f, 0.0f,
	1.0f, 1.0f,

	1.0f, 0.0f,
	0.0f, 1.0f,
	0.0f, 0.0f,
	
    1.0f, 0.0f,
	1.0f, 1.0f,
	0.0f, 1.0f,

	1.0f, 0.0f,
	0.0f, 1.0f,
	0.0f, 0.0f,
};