# IOS-SDK
Use Xcode 7.3 or earlier. 

-> In your project’s folder copy  
  a. H2HBundle.bundle, 
  b. TutorWebTC.framework, 
  c. H2HSDK.framework. 
provided in FrameworksAndResources folder.

-> From Project File -> General -> Embedded Binaries -> +  -> Add Other (select these files: H2HBundle.bundle, TutorWebTC.framework, H2HSDK.framework from the project directory.) -> Select: copy items if needed -> Finish.
Make sure these files are added under:

  Embedded Binaries: (General tab)
  H2HBundle.bundle, 
  TutorWebTC.framework, 
  H2HSDK.framework. 

and Linked Frameworks and Libraries: (General tab)
  TutorWebTC.framework
  H2HSDK.framework. 

->  Project File -> Build Phases -> Copy Bundle Resources -> + (if not present) -> H2HBundle.bundle
->  Project File -> Build Settings -> Build Options -> Enable Bitcode -> NO
->  Create Podfile and add following statements:
    platform :ios, ‘7.1’
    
        target ‘<Target Name>’ do
        
          pod 'KissXML'
          pod  'CocoaAsyncSocket'
          pod 'CocoaLumberjack’, ‘2.2.0’
        end

and perform pod install. 
(for more information on how to install pods, refer: https://cocoapods.org/)
close project file and open workspace created by pods. 

-> Unzip and copy XMPPFramework (provided in FrameworksAndResources folder) in your project folder.
Add it in frameworks folder in your project. ( select Frameworks -> Add files to <Project Name> -> select XMPPFramework we just copied ) 
-> Add Project file -> Build Phases -> Link Binary with Libraries -> + -> libresolv.tbd 
-> In H2HSDK.framework -> Headers -> H2HSDK.h: add line #import "H2HSDKExt.h" (if not already present)
-> Clean and Build your project.
