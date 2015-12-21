if isunix % Building on Linux or Apple(?)    
    mex('-v','sdl_joystick.c','-lSDL'); 
else % Building on Windows     
    %mex('-v','sdl_joystick.c','-I../src/windows/SDL2-2.0.1/include','-L../src/windows/SDL2-2.0.1/lib/x86','-lSDL2');    
    mex('sdl_joystick.c','-I../../src/windows/SDL2-2.0.1/include','-L../../src/windows/SDL2-2.0.1/lib/x86','-lSDL2');    
    %copyfile(['SDL/bin/' computer('arch') '/SDL.dll'],'.');
    movefile('sdl_joystick.mexw32', '..');     
    copyfile('../../src/windows/SDL2-2.0.1/lib/x86/SDL2.dll', '..');     
end 
fprintf('Build done!\n');