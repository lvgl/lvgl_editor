# LVGL's UI Editor

This repository contains public content related to the LVGL Editor. 


## Introduction

LVGL's UI editor is a work-in-progress tool designed to help UI developers create embedded UIs faster and more maintainably. The key features of this tool are:

- **Component-oriented**: Various UI elements can be implemented as reusable components.
- **XML-based**: Components are described in an HTML-like syntax.
- **Instant preview**: Components can be previewed as you edit them.
- **Figma support**: LVGL's Figma plugin helps quickly extract styles from any Figma elements.
- **Online preview**: A CI action converts XML files into a website for easy preview.
- **Custom widget creation**: Unlike components, widgets have C logic. You can recompile the editor to include new widgets' code.
- **C export**: Both components and widgets can be exported to C, enabling seamless integration into your application, just like handwritten code.
- **Runtime XML loading**: Components can be loaded from XML at runtime without recompiling the firmware.

This tool is **developer-centric**, designed for those who bring designer-created UIs to life. It’s not a drag-and-drop tool for designers but assumes users are comfortable with writing and managing code. The editor complements your workflow, enabling seamless transitions between generated and handwritten code. Use it where it’s more efficient, and code directly when better suited.

We believe designers should work freely in tools like Figma, focusing on creativity without limitations. LVGL's editor helps developers structure and implement these designs in a maintainable, scalable way. Our goal is to bridge the gap, empowering both designers and developers to excel in their roles.

---

This video provides a step-by-step guide to all the supported features. A new video for v0.2 is coming soon. 

[![image](https://github.com/user-attachments/assets/2c72c3c9-44fa-4ae4-8616-867e2efe3209)](https://www.youtube.com/watch?v=YEoHK5P0ASE)

## Get Started

1. **Install the dependencies**: 
   - On Windows: Make sure that `wsl` is installed. Just add `wsl --install` in the command line
   - On Linux: Install Podman with `sudo apt-get install podman` or its equivalent
   - On Mac: Install Podman with `brew install podman`
2. **Download and install the Editor.** Find the installers [here](https://github.com/lvgl/lvgl_editor/releases).
3. **Fork and clone this repository** to experiment with its CI actions and online preview features. In the repository settings set the source of `Pages` to `GitHub Action`, and on the `Actions` page enable actions. 
4. **Open the editor** and load the example folder.
5. **Prepare the Project** Generate C code by clicking the ![image](https://github.com/user-attachments/assets/f2c720b6-19cf-4abd-a79b-ac31b2cc0fec)
`Generate Code` button first and click ![image](https://github.com/user-attachments/assets/8cb7fb0b-bde3-4be7-af31-10131c5c9476)
`Compile Project` button after that to recompile the Editor's preview with the new C code.  
6. **Edit components**: Open `button_default.xml` and make edits. Save the file (Ctrl+S) to update the preview. Learn more about LVGL's XML language [here](https://docs.lvgl.io/master/details/xml/index.html).
7. **Edit a widget**: Open `slider_box.xml` (a widget) and click "Compile Code." It will compile the C code alongside the widget's XML. Feel free to edit the C code and recompile it.
8. **Check out Fonts and Images**: Open `globals.xml` to see how images and fonts are handled.
9. **Open the [Figma project](https://www.figma.com/design/itmQpC9m5HessaOZFbYTwK/Example?node-id=0-1&t=oWqPUdcRyVYtRgAY-0)** and duplicate it.
10. **Use the Figma to LVGL plugin**: Open our plugin, modify the design, and update the XMLs with the new styles.
11. **Try the online preview**: Commit and push your changes. Wait for the CI to run and check the online preview.
12. **Open an issue** if you encounter problems or get stuck. 😊

## Current Status and Future Plans

This is an early preview of the UI editor, so only core functionalities are supported at this moment. 
The goal is to demonstrate the development direction and gather feedback for adjustments.

**Note**: This version is for preview purposes only and not suitable for production.

### Currently Supported Features

- Most of the built-in widgets (`lv_obj`, `lv_label`, `lv_slider`, `lv_button`, `lv_chart`, `lv_scale` etc.).
- Load XML components at runtime from files or data (part of LVGL as an open-source MIT-licensed feature).
- Style sheets and local styles supporting most of the style properties.
- Nest components and widgets at any depth.
- Dynamically instantiate XML components in C.
- Register images and fonts accessible by name in XML
- Use constants for widget and style properties.
- Define, pass, and use parameters for components.
- XML auto-completion, and syntax error highlighting.
- Inspector mode to drag and resize the widgets by mouse
- Event and subject handling.
- VSCode plugin
- Update style properties from Figma
 
Please refer to the examples to learn the XML syntax or read [this page](https://docs.lvgl.io/master/details/auxiliary-modules/xml/index.html) for more information.

### Future Plans

We aim to release v0.3 in **July 2025**, which will include:

- Translation support.
- Eclipse plugin
- Link images to Figma
- Theme switching support
- Debug panel to adjust subject
- Animations

## Business Model

During development, everything will be free. After v1.0 (targeted for **Q3 2025**), we plan to introduce the following models (subject to change):

### Free Version:
- No limitations on the number of components.
- No access to the Figma plugin or online preview.
- No support for custom widgets (i.e., recompiling the editor).
- No multi-language UI translation support.
- Some advanced features may be disabled.

**Target Audience**: Makers and small companies.

### Yearly Subscription
- Access to all editor features (e.g., multi-language support, custom widgets).
- Figma plugin and online preview support.
- Free for open-source projects (requires regular updates to ensure the project remains open-source).

**Target Audience**: Teams with designers and developers requiring collaboration.

### Enterprise Version:
- Plugin support for deep customization (e.g., custom buttons, themes, XML processing, code export hooks).
- Integration with custom applications or CI workflows via CLI.
- Collaborative development, including feature development as a service.
- Custom pricing based on specific needs.

**Target Audience**: Large enterprise companies and vendors requiring custom tools and features.

## Contribution

Just like LVGL, we are developing this tool for you. We want to add the features you need, not just what we think is useful.

Please open an issue in this repository to share your feedback. Your input will help shape the development of LVGL's UI Editor! 

Thank you! ❤️
