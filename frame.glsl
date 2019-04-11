#version 330
out vec4 fragColor;

in vec3 ourColor;
in vec2 TexColor;

uniform sampler2D ourTexture;

void main() {
    fragColor = texture(ourTexture, TexColor);
}
