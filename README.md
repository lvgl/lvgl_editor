# LVGL UI Editor

This repository contains the public content related to the LVGL UI Editor.  

## Introduction

LVGL’s UI Editor is a **developer-centric** tool to help embedded UI developers create user interfaces faster and more efficiently.  

It is designed for developers who implement designs created in tools like Figma — not for designers themselves. The editor assumes you are comfortable writing and managing code, and integrates seamlessly into your workflow, letting you switch between generated and handwritten code whenever it makes sense.  

We believe designers should work freely in creative tools like Figma. LVGL’s Editor helps developers turn those designs into maintainable, scalable embedded UIs.  

### Key Features

- **Component-oriented**: Build reusable UI components.  
- **XML-based**: Describe components in an HTML-like syntax.  
- **Runtime XML loading**: Load components from XML at runtime without recompiling.  
- **Instant preview**: See changes immediately as you edit.  
- **Figma support**: Extract styles from Figma using LVGL’s plugin.  
- **Share online**: CI actions generate a preview website from your XML.  
- **Custom widget creation**: Add C-based widgets by recompiling the editor.  
- **C export**: Export both components and widgets to C code.  
- **Built-in testing**: Create UI tests in seconds.  
- **Translations**: Manage text translations flexibly.  
- **Data binding**: Bind widgets to global data to bridge UI and application logic.  

---

This video provides a step-by-step guide to all supported features. A new video for v0.2 is coming soon.  

[![image](https://github.com/user-attachments/assets/2c72c3c9-44fa-4ae4-8616-867e2efe3209)](https://www.youtube.com/embed/TghXiRl6LT4?si=Gd-_pc5fGmTEaOyu)

## Get Started

1. **Install dependencies**:  
   - Windows: Install `wsl` (`wsl --install`)  
   - Linux: Install Podman (`sudo apt-get install podman`)  
   - Mac: Install Podman (`brew install podman`)  

2. **Download and install the Editor**: Get the installers [here](https://github.com/lvgl/lvgl_editor/releases).  
3. **Fork and clone this repository** to try the CI actions and online preview. In the GitHub settings of the forked repository set `Pages` source to `GitHub Action` and enable Actions as well.  
4. **Open the editor** and load the example folder.  
5. **Prepare the project**:  
   - Click `Generate Code`  
   - Click `Compile Project` to rebuild the preview with new C code.  
6. **Edit components**: Modify `screens/settings/settings.xml` to see the preview is updated. Learn more about XML [here](https://docs.lvgl.io/master/details/xml/index.html).  
7. **Fonts and images**: Check `globals.xml` for how these are handled.  
8. **Figma**: Open the [Figma project](https://www.figma.com/design/itmQpC9m5HessaOZFbYTwK/Example?node-id=0-1&t=oWqPUdcRyVYtRgAY-0) and duplicate it.  
9. **Use the Figma plugin**: Modify the design and update XMLs with new styles.  
10. **Try the online preview**: Push your changes, wait for CI to run, then check the preview.  
11. **Need help?** Open an issue anytime. 😊  

## Current Status and Future Plans

Current version: **v0.3 (beta, not production-ready)**  
Feature-complete except for animation support.  

### Currently Supported Features

- Most built-in widgets (`lv_obj`, `lv_label`, `lv_slider`, `lv_button`, `lv_chart`, `lv_scale`, etc.)  
- Runtime XML loading (MIT-licensed, part of LVGL)  
- Style sheets and local styles  
- Nested components and widgets  
- Dynamic instantiation of XML components in C  
- Image and font registration by name in XML  
- Constants for widget and style properties  
- Parameters for components  
- XML auto-completion and error highlighting  
- Inspector mode for drag and resize  
- Event and subject handling  
- Figma style updates  
- Screen creation/loading events  
- Data binding  
- UI testing  
- Translations  
- CMake support  

Learn XML syntax from the examples or [documentation](https://docs.lvgl.io/master/details/xml/index.html).  

### Future Plans

v1.0 planned for **October 2025**.

## Business Model

During development, all features are free. After v1.0, the following plans will be available:  

### Free Version
- Use all features in the online editor  
- Save changes only to public GitHub repositories  
- Target: Makers and open-source projects  

### Starter Subscription
- Basic editor features  
- Unlimited project complexity  
- Floating license  
- Annual subscription (price announced September)  
- Target: Small companies  

### Business Subscription
- Full editor features  
- Unlimited project complexity  
- Floating license  
- Email support  
- Annual subscription (price announced September)  
- Target: Companies with complex products requiring collaboration  

### Enterprise Version
- Full editor features  
- Unlimited project complexity  
- Custom plugin development  
- 5 floating licenses  
- Live support (Slack, Teams, etc.)  
- Annual subscription (price announced September)  
- Target: Large enterprises and vendors needing custom tools and features  

## Contribution

We’re building this tool for you — your feedback drives its development.  

Please open an issue to share suggestions, report bugs, or request features.  

Thank you! ❤️
