#version 330
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;
out vec3 ourColor;
out vec4 ourPosition;

//uniform float x_uniform;

void main() {
    gl_Position = vec4(aPos,  1.0);
//    gl_Position = vec4(aPos.x + x_uniform, aPos.y, aPos.z,  1.0);
//    ourPosition = gl_Position;
    ourColor = aColor;
}
