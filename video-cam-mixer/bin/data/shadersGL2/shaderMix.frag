#version 120

uniform vec2            u_resolution;
uniform float           u_time;
uniform sampler2DRect   cam1;
varying vec2            texCoordVarying;

void main()
{   
    vec2 st = gl_FragCoord.xy/u_resolution.xy;
    vec4 mixer = vec4(0.0, 0.0, 0.0, 0.0);  
    
    vec4 camTex1=texture2DRect(cam1, 0.5*texCoordVarying);
    vec4 camTex2=texture2DRect(cam1, 1.0*texCoordVarying);
    vec4 camTex3=texture2DRect(cam1, 1.5*texCoordVarying);
    vec4 camTex4=texture2DRect(cam1, 2.0*texCoordVarying);

    mixer = mix(camTex1*camTex2,camTex3*camTex4,0.5);

    gl_FragColor = mixer;   
}
