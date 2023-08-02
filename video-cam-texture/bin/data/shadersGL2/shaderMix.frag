#version 120

uniform sampler2DRect cam1;
varying vec2 texCoordVarying;

void main()
{
    vec4 camTex1=texture2DRect(cam1, 1.0*texCoordVarying);
    gl_FragColor = camTex1;   
}
