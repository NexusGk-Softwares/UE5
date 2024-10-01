ImageClipboardProject/
│
├── ImageClipboardProject.uproject          # Unreal Engine project file
│
├── Source/                                  # C++ source files
│   ├── ImageClipboardProject/               # Main module source
│   │   ├── ImageClipboardProject.Build.cs   # Build configuration for the project
│   │   ├── ClipboardImageActor.h            # Header file for the ClipboardImageActor
│   │   ├── ClipboardImageActor.cpp          # Implementation file for the ClipboardImageActor
│   │   ├── ImageClipboardWidget.h           # Header file for the UI widget
│   │   ├── ImageClipboardWidget.cpp         # Implementation file for the UI widget
│   │   ├── MyGameMode.h                     # Custom game mode header (optional)
│   │   └── MyGameMode.cpp                   # Custom game mode implementation (optional)
│   │
│   └── ImageClipboardProjectEditor/         # Editor module (optional, if needed)
│       ├── ImageClipboardProjectEditor.Build.cs
│       └── (Other editor-specific files)
│
├── Content/                                  # Unreal Engine content
│   ├── UI/                                   # UI assets
│   │   └── ImageClipboardWidget.uasset       # The UI widget asset
│   │
│   ├── Textures/                             # Texture assets (optional)
│   │   └── (Any texture files you need)
│   │
│   └── (Other content folders as needed)
│
├── Config/                                   # Configuration files
│   ├── DefaultEngine.ini                     # Engine configuration
│   ├── DefaultGame.ini                       # Game configuration
│   └── (Other configuration files as needed)
│
└── .vscode/                                  # Visual Studio Code configuration
    ├── tasks.json                            # Build task configuration
    └── launch.json                           # Debug configuration
