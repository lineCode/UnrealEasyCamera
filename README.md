# EasyCamera: A Simplified Camera System for You to Create Plentiful Gameplay Camera Movements and Effects

![GitHub Repo stars](https://img.shields.io/github/stars/littlesulley/UnrealEasyCamera)
![GitHub last commit](https://img.shields.io/github/last-commit/littlesulley/UnrealEasyCamera)
![Github version](https://img.shields.io/badge/version-v0.1-green)

***EasyCamera*** is a simplified, extensible and designer-friendly camera system for Unreal Engine. It enhances the built-in spring arm and camera components in native Unreal editor across a wide variety of common gameplay camera behaviours such as keeping a target at a fixed screen position, moving on rail, and resolving occulusion in complex occasions, enabling you to easily create plentiful smooth camera movements and effects within only few minutes.

Currently ***EasyCamera*** only supports Unreal Engine version 5.1. So before using this plugin, please upgrade your project to Unreal Engine 5.1. We are also working on migrating ***EasyCamera*** to Unreal Engine 5.0, but this may take some time.

For manuals of ***EasyCamera***, please refer to the [Manuals Of EasyCamera](Docs/ManualsOfEasyCamera.md) page. This page will guide you through the basic uses and advanced features of **EasyCamera**, and it will also give you some examples showcasing what it can do and how to basically set up your own cameras.

You can also go to the [Gitbook page](https://sulleyyys-organization.gitbook.io/manuals-of-easycamera/) for a better reading experience.

TODOs for version *alpha*:

- [x] A better implementation to receive input for **ControlAim**.
- [x] Implment **AimAssist**, in ControlAim component.
- [ ] Implement **ProceduralMotionGeneration**. This functionality enables you to define custom camera motion curves by keyframing transforms in world space without opening Sequencer. Moreover, you can generate random motion curves based on the curve you just created.
- [ ] Implement **EventReceiverExtension**. This extension enables users to define events in response to specific messages from gameplay. Such events can be used to alter camera parameters.