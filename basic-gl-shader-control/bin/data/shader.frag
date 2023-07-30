uniform vec2  u_resolution;
uniform vec2  u_mouse;
uniform float u_time;
uniform float u_value1;


#define PI 3.14159265359

float plot(vec2 st, float pct){
        return  smoothstep( pct-0.02, pct, st.y) -
                smoothstep( pct, pct+0.02, st.y);
        }

void main() {
    vec2 st = gl_FragCoord.xy/u_resolution.xy;
st -= 1.80*cos(0.32);  // becomes -0.5 to 0.5
            st *= u_value1;
            float pct2 = 0.0;
            pct2 = distance(st,vec2(0.5));
        float y = (smoothstep((sin(-pct2*((sin(st.y-st.x))*1.4551554683312051)*(cos(2.590095749834554))))*(tan((st.y)*2.1858437020129955)),(2.7197761977790043),(2.2252912302615013*0.02)))+(smoothstep((sin(pct2*((cos(st.x))-2.016938346406928)*(cos(1.7831233077801736))))/(cos((st.x-st.y*0.3)*2.2321966384418994)),(sin(2.907134627397676)-1.738117519861793),(1.1383542772637152+((cos(st.x*st.y+st.y-st.x)*tan(2.529789643113757))/(cos(-st.x+st.y)*2.8780651995847797)))));float y2 = (smoothstep((cos(-pct2-(sin(st.x-st.y/st.x+0.180)*2.7823220400432054)+(sin(1.9968169642153522))))+(cos((-st.x+st.y)*0.20)),2.1279823813948893,0.12832+cos(-st.y*st.x*2.529789643113757))) / (smoothstep((cos(-pct2*(sin(st.y*(st.x*0.02))*0.1321)+(tan(2.5405897293764856))))+(cos((st.y-(st.x*1.2))*0.20)),sin(st.x-st.y/st.y+st.x*2.0),0.29132*sin(0.1)));

        vec3 colorB = vec3(y*y2)*1.0;
        vec3 colorC = vec3(y-y2)*1.0;
        vec3 colorC2 = vec3(y+y2)*1.0;

        colorB = (1.0)*colorB*vec3(.189281990*(st.y+sin(0.31*st.x)*(sin(st.y-st.x+sin(0.131))+cos(st.x+st.y+(0.082*cos(-st.x*st.y+sin(st.y+st.x)))))),2.410142749581069*tan((st.x-st.y-(st.y+st.x*(1.0027750885858469+st.y-st.x)))*0.02),(1.570751508883515*(sin(y2-st.y+st.x*(1.9968169642153522))+(-st.y-st.x*st.x*st.y))+sin(.31))+(cos((0.30*(-st.y+st.x*-st.x+st.y)))+(.20*cos(-st.x+st.y*st.x-st.y))));

        vec2 bl = step(vec2(0.5),(st));
        float pct = bl.x * bl.y;
        vec3 colorMix = vec3(0.0);
        colorMix = mix(colorC*0.910, (cos(colorC2*02.10193)*sin(colorC2*0.893))*cos(.03), (0.92*colorB+(cos(0.1919202)))*sin(1.7831233077801736));
        gl_FragColor = vec4(colorMix,1.0);

    // gl_FragColor=vec4(st.x,st.y,0.0,1.0);
}