#include <hxcpp.h>

#include <zpp_nape/util/ZPP_Set_ZPP_CbSet.h>
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleEvent.h>
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionPair.h>
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionVertex.h>
#include <zpp_nape/util/ZPP_Set_ZPP_CbSetPair.h>
#include <zpp_nape/util/ZPP_Set_ZPP_Body.h>
#include <zpp_nape/util/ZPP_PubPool.h>
#include <zpp_nape/util/ZPP_Math.h>
#include <zpp_nape/util/ZPP_ContactList.h>
#include <zpp_nape/util/ZPP_ArbiterList.h>
#include <zpp_nape/util/ZPP_InteractionGroupList.h>
#include <zpp_nape/util/ZPP_EdgeList.h>
#include <zpp_nape/util/ZPP_ShapeList.h>
#include <zpp_nape/util/ZPP_ConvexResultList.h>
#include <zpp_nape/util/ZPP_RayResultList.h>
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#include <zpp_nape/util/ZPP_Vec2List.h>
#include <zpp_nape/util/ZPP_CbTypeList.h>
#include <zpp_nape/util/ZPP_ListenerList.h>
#include <zpp_nape/util/ZPP_CompoundList.h>
#include <zpp_nape/util/ZPP_InteractorList.h>
#include <zpp_nape/util/ZPP_BodyList.h>
#include <zpp_nape/util/ZPP_ConstraintList.h>
#include <zpp_nape/util/ZPP_MixVec2List.h>
#include <zpp_nape/util/ZNPNode_RayResult.h>
#include <zpp_nape/util/ZNPNode_ZPP_GeomPoly.h>
#include <zpp_nape/util/ZNPNode_ConvexResult.h>
#include <zpp_nape/util/ZNPNode_ZPP_InteractionGroup.h>
#include <zpp_nape/util/ZNPNode_ZPP_ToiEvent.h>
#include <zpp_nape/util/ZNPNode_ZPP_ColArbiter.h>
#include <zpp_nape/util/ZNPNode_ZPP_Listener.h>
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#include <zpp_nape/util/ZNPNode_ZPP_FluidArbiter.h>
#include <zpp_nape/util/ZNPNode_ZPP_Component.h>
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#include <zpp_nape/util/ZNPNode_ZPP_SimpleEvent.h>
#include <zpp_nape/util/ZNPNode_ZPP_SimpleVert.h>
#include <zpp_nape/util/ZNPNode_ZPP_SimplifyP.h>
#include <zpp_nape/util/ZNPNode_ZPP_GeomVert.h>
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#include <zpp_nape/util/ZNPNode_ZPP_CutVert.h>
#include <zpp_nape/util/ZNPNode_ZPP_CutInt.h>
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#include <zpp_nape/util/ZNPNode_ZPP_Interactor.h>
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#include <zpp_nape/util/ZNPNode_ZPP_CallbackSet.h>
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#include <zpp_nape/util/ZNPList_RayResult.h>
#include <zpp_nape/util/ZNPList_ZPP_GeomPoly.h>
#include <zpp_nape/util/ZNPList_ConvexResult.h>
#include <zpp_nape/util/ZNPList_ZPP_InteractionGroup.h>
#include <zpp_nape/util/ZNPList_ZPP_ToiEvent.h>
#include <zpp_nape/util/ZNPList_ZPP_ColArbiter.h>
#include <zpp_nape/util/ZNPList_ZPP_Listener.h>
#include <zpp_nape/util/ZNPList_ZPP_SensorArbiter.h>
#include <zpp_nape/util/ZNPList_ZPP_FluidArbiter.h>
#include <zpp_nape/util/ZNPList_ZPP_Component.h>
#include <zpp_nape/util/ZNPList_ZPP_AABBNode.h>
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#include <zpp_nape/util/ZNPList_ZPP_AABBPair.h>
#include <zpp_nape/util/ZNPList_ZPP_SimpleEvent.h>
#include <zpp_nape/util/ZNPList_ZPP_SimpleVert.h>
#include <zpp_nape/util/ZNPList_ZPP_SimplifyP.h>
#include <zpp_nape/util/ZNPList_ZPP_GeomVert.h>
#include <zpp_nape/util/ZNPList_ZPP_PartitionedPoly.h>
#include <zpp_nape/util/ZNPList_ZPP_PartitionVertex.h>
#include <zpp_nape/util/ZNPList_ZPP_CutVert.h>
#include <zpp_nape/util/ZNPList_ZPP_CutInt.h>
#include <zpp_nape/util/ZNPList_ZPP_CbSetPair.h>
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#include <zpp_nape/util/ZNPList_ZPP_Compound.h>
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#include <zpp_nape/util/ZNPList_ZPP_CallbackSet.h>
#include <zpp_nape/util/ZPP_Flags.h>
#include <zpp_nape/util/FastHash2_Hashable2_Boolfalse.h>
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#include <zpp_nape/util/ZPP_Debug.h>
#include <zpp_nape/util/ZNPArray2_ZPP_MarchPair.h>
#include <zpp_nape/util/ZNPArray2_ZPP_GeomVert.h>
#include <zpp_nape/util/ZNPArray2_Float.h>
#include <zpp_nape/space/ZPP_SweepPhase.h>
#include <zpp_nape/space/ZPP_SweepData.h>
#include <zpp_nape/space/ZPP_Space.h>
#include <zpp_nape/space/ZPP_CbSetManager.h>
#include <zpp_nape/space/ZPP_CallbackSet.h>
#include <zpp_nape/space/ZPP_Component.h>
#include <zpp_nape/space/ZPP_Island.h>
#include <zpp_nape/space/ZPP_DynAABBPhase.h>
#include <zpp_nape/space/ZPP_AABBTree.h>
#include <zpp_nape/space/ZPP_AABBPair.h>
#include <zpp_nape/space/ZPP_AABBNode.h>
#include <zpp_nape/space/ZPP_Broadphase.h>
#include <zpp_nape/shape/ZPP_Polygon.h>
#include <zpp_nape/shape/ZPP_Edge.h>
#include <zpp_nape/shape/ZPP_Circle.h>
#include <zpp_nape/shape/ZPP_Shape.h>
#include <zpp_nape/phys/ZPP_Material.h>
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#include <zpp_nape/phys/ZPP_Compound.h>
#include <zpp_nape/phys/ZPP_Body.h>
#include <zpp_nape/phys/ZPP_Interactor.h>
#include <zpp_nape/geom/ZPP_VecMath.h>
#include <zpp_nape/geom/ZPP_Vec3.h>
#include <zpp_nape/geom/ZPP_Vec2.h>
#include <zpp_nape/geom/ZPP_Triangular.h>
#include <zpp_nape/geom/ZPP_PartitionPair.h>
#include <zpp_nape/geom/ZPP_SweepDistance.h>
#include <zpp_nape/geom/ZPP_ToiEvent.h>
#include <zpp_nape/geom/ZPP_Simplify.h>
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#include <zpp_nape/geom/ZPP_Simple.h>
#include <zpp_nape/geom/ZPP_SimpleSweep.h>
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#include <zpp_nape/geom/ZPP_Ray.h>
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#include <zpp_nape/geom/ZPP_Monotone.h>
#include <zpp_nape/geom/ZPP_MatMN.h>
#include <zpp_nape/geom/ZPP_Mat23.h>
#include <zpp_nape/geom/ZPP_MarchingSquares.h>
#include <zpp_nape/geom/ZPP_MarchPair.h>
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#include <zpp_nape/geom/ZPP_GeomVert.h>
#include <zpp_nape/geom/ZPP_Geom.h>
#include <zpp_nape/geom/ZPP_Cutter.h>
#include <zpp_nape/geom/ZPP_CutInt.h>
#include <zpp_nape/geom/ZPP_CutVert.h>
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
#include <zpp_nape/geom/ZPP_Convex.h>
#include <zpp_nape/geom/ZPP_Collide.h>
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#include <zpp_nape/geom/ZPP_AABB.h>
#include <zpp_nape/dynamics/ZPP_SpaceArbiterList.h>
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#include <zpp_nape/dynamics/ZPP_IContact.h>
#include <zpp_nape/dynamics/ZPP_Contact.h>
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#include <zpp_nape/constraint/ZPP_WeldJoint.h>
#include <zpp_nape/constraint/ZPP_UserBody.h>
#include <zpp_nape/constraint/ZPP_UserConstraint.h>
#include <zpp_nape/constraint/ZPP_PulleyJoint.h>
#include <zpp_nape/constraint/ZPP_PivotJoint.h>
#include <zpp_nape/constraint/ZPP_MotorJoint.h>
#include <zpp_nape/constraint/ZPP_LineJoint.h>
#include <zpp_nape/constraint/ZPP_DistanceJoint.h>
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#include <zpp_nape/constraint/ZPP_AngleDraw.h>
#include <zpp_nape/constraint/ZPP_AngleJoint.h>
#include <zpp_nape/constraint/ZPP_Constraint.h>
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#include <zpp_nape/callbacks/ZPP_Listener.h>
#include <zpp_nape/callbacks/ZPP_CbType.h>
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#include <zpp_nape/callbacks/ZPP_Callback.h>
#include <zpp_nape/ZPP_ID.h>
#include <zpp_nape/ZPP_Const.h>
#include <sys/io/Process.h>
#include <sys/io/_Process/Stdout.h>
#include <sys/io/_Process/Stdin.h>
#include <sys/io/FileSeek.h>
#include <sys/io/FileOutput.h>
#include <sys/io/FileInput.h>
#include <sys/io/File.h>
#include <sys/FileSystem.h>
#include <sys/_FileSystem/FileKind.h>
#include <nme/installer/Assets.h>
#include <nme/VectorHelper.h>
#include <nme/Lib.h>
#include <native/utils/WeakRef.h>
#include <native/utils/Timer.h>
#include <native/utils/Endian.h>
#include <native/utils/CompressionAlgorithm.h>
#include <native/utils/ByteArray.h>
#include <native/utils/IDataInput.h>
#include <native/utils/IMemoryRange.h>
#include <native/ui/Keyboard.h>
#include <native/text/TextFormat.h>
#include <native/text/TextFieldType.h>
#include <native/text/TextFieldAutoSize.h>
#include <native/text/FontType.h>
#include <native/text/FontStyle.h>
#include <native/text/Font.h>
#include <native/text/AntiAliasType.h>
#include <native/net/URLVariables.h>
#include <native/net/URLRequestMethod.h>
#include <native/net/URLRequestHeader.h>
#include <native/net/URLRequest.h>
#include <native/net/URLLoaderDataFormat.h>
#include <native/net/URLLoader.h>
#include <native/media/SoundTransform.h>
#include <native/media/SoundLoaderContext.h>
#include <native/media/SoundChannel.h>
#include <native/media/Sound.h>
#include <native/media/ID3Info.h>
#include <native/geom/Transform.h>
#include <native/geom/Rectangle.h>
#include <native/geom/Point.h>
#include <native/geom/Matrix.h>
#include <native/geom/ColorTransform.h>
#include <native/filters/BitmapFilter.h>
#include <native/events/TimerEvent.h>
#include <native/events/SampleDataEvent.h>
#include <native/events/ProgressEvent.h>
#include <native/events/KeyboardEvent.h>
#include <native/events/JoystickEvent.h>
#include <native/events/IOErrorEvent.h>
#include <native/events/HTTPStatusEvent.h>
#include <native/events/FocusEvent.h>
#include <native/events/EventPhase.h>
#include <native/events/Listener.h>
#include <native/events/ErrorEvent.h>
#include <native/events/TextEvent.h>
#include <native/errors/RangeError.h>
#include <native/errors/EOFError.h>
#include <native/errors/ArgumentError.h>
#include <native/errors/Error.h>
#include <native/display/TriangleCulling.h>
#include <native/display/Tilesheet.h>
#include <native/display/StageScaleMode.h>
#include <native/display/StageQuality.h>
#include <native/display/StageDisplayState.h>
#include <native/display/StageAlign.h>
#include <native/display/TouchInfo.h>
#include <native/display/SpreadMethod.h>
#include <native/display/Shape.h>
#include <native/display/PixelSnapping.h>
#include <native/display/MovieClip.h>
#include <native/display/ManagedStage.h>
#include <native/display/Stage.h>
#include <native/events/TouchEvent.h>
#include <native/events/MouseEvent.h>
#include <native/events/Event.h>
#include <native/display/LineScaleMode.h>
#include <native/display/JointStyle.h>
#include <native/display/InterpolationMethod.h>
#include <native/display/IGraphicsData.h>
#include <native/display/GraphicsPathWinding.h>
#include <native/display/Graphics.h>
#include <native/display/GradientType.h>
#include <native/display/CapsStyle.h>
#include <native/display/BlendMode.h>
#include <native/display/OptimizedPerlin.h>
#include <native/display/BitmapData.h>
#include <native/display/Bitmap.h>
#include <native/Lib.h>
#include <nape/util/ShapeDebug.h>
#include <nape/util/Debug.h>
#include <nape/space/Space.h>
#include <nape/space/Broadphase.h>
#include <nape/shape/ValidationResult.h>
#include <nape/shape/ShapeType.h>
#include <nape/shape/ShapeList.h>
#include <nape/shape/ShapeIterator.h>
#include <nape/shape/Polygon.h>
#include <nape/shape/EdgeList.h>
#include <nape/shape/EdgeIterator.h>
#include <nape/shape/Edge.h>
#include <nape/shape/Circle.h>
#include <nape/shape/Shape.h>
#include <nape/phys/Material.h>
#include <nape/phys/MassMode.h>
#include <nape/phys/InteractorList.h>
#include <nape/phys/InteractorIterator.h>
#include <nape/phys/InertiaMode.h>
#include <nape/phys/GravMassMode.h>
#include <nape/phys/FluidProperties.h>
#include <nape/phys/CompoundList.h>
#include <nape/phys/CompoundIterator.h>
#include <nape/phys/Compound.h>
#include <nape/phys/BodyType.h>
#include <nape/phys/BodyList.h>
#include <nape/phys/BodyIterator.h>
#include <nape/phys/Body.h>
#include <nape/phys/Interactor.h>
#include <nape/geom/Winding.h>
#include <nape/geom/Vec3.h>
#include <nape/geom/Vec2List.h>
#include <nape/geom/Vec2Iterator.h>
#include <nape/geom/Vec2.h>
#include <nape/geom/RayResultList.h>
#include <nape/geom/RayResultIterator.h>
#include <nape/geom/RayResult.h>
#include <nape/geom/Ray.h>
#include <nape/geom/MatMN.h>
#include <nape/geom/Mat23.h>
#include <nape/geom/MarchingSquares.h>
#include <nape/geom/GeomVertexIterator.h>
#include <nape/geom/GeomPolyList.h>
#include <nape/geom/GeomPolyIterator.h>
#include <nape/geom/GeomPoly.h>
#include <nape/geom/Geom.h>
#include <nape/geom/ConvexResultList.h>
#include <nape/geom/ConvexResultIterator.h>
#include <nape/geom/ConvexResult.h>
#include <nape/geom/AABB.h>
#include <nape/dynamics/InteractionGroupList.h>
#include <nape/dynamics/InteractionGroupIterator.h>
#include <nape/dynamics/InteractionGroup.h>
#include <nape/dynamics/InteractionFilter.h>
#include <nape/dynamics/FluidArbiter.h>
#include <nape/dynamics/ContactList.h>
#include <nape/dynamics/ContactIterator.h>
#include <nape/dynamics/Contact.h>
#include <nape/dynamics/CollisionArbiter.h>
#include <nape/dynamics/ArbiterType.h>
#include <nape/dynamics/ArbiterList.h>
#include <nape/dynamics/ArbiterIterator.h>
#include <nape/dynamics/Arbiter.h>
#include <nape/constraint/WeldJoint.h>
#include <nape/constraint/UserConstraint.h>
#include <nape/constraint/PulleyJoint.h>
#include <nape/constraint/PivotJoint.h>
#include <nape/constraint/MotorJoint.h>
#include <nape/constraint/LineJoint.h>
#include <nape/constraint/DistanceJoint.h>
#include <nape/constraint/ConstraintList.h>
#include <nape/constraint/ConstraintIterator.h>
#include <nape/constraint/AngleJoint.h>
#include <nape/constraint/Constraint.h>
#include <nape/callbacks/PreListener.h>
#include <nape/callbacks/PreFlag.h>
#include <nape/callbacks/PreCallback.h>
#include <nape/callbacks/OptionType.h>
#include <nape/callbacks/ListenerType.h>
#include <nape/callbacks/ListenerList.h>
#include <nape/callbacks/ListenerIterator.h>
#include <nape/callbacks/InteractionType.h>
#include <nape/callbacks/InteractionListener.h>
#include <nape/callbacks/InteractionCallback.h>
#include <nape/callbacks/ConstraintListener.h>
#include <nape/callbacks/ConstraintCallback.h>
#include <nape/callbacks/CbTypeList.h>
#include <nape/callbacks/CbTypeIterator.h>
#include <nape/callbacks/CbType.h>
#include <nape/callbacks/CbEvent.h>
#include <nape/callbacks/BodyListener.h>
#include <nape/callbacks/Listener.h>
#include <nape/callbacks/BodyCallback.h>
#include <nape/callbacks/Callback.h>
#include <nape/Config.h>
#include <haxe/io/Output.h>
#include <haxe/io/Input.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/io/Bytes.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Log.h>
#include <format/display/MovieClip.h>
#include <format/display/FrameLabel.h>
#include <cpp/zip/Uncompress.h>
#include <cpp/zip/Flush.h>
#include <cpp/zip/Compress.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <Type.h>
#include <ValueType.h>
#include <Sys.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Std.h>
#include <Reflect.h>
#include <PhysicsData.h>
#include <Main.h>
#include <native/display/Sprite.h>
#include <native/display/DisplayObjectContainer.h>
#include <List.h>
#include <IntIter.h>
#include <IntHash.h>
#include <Hash.h>
#include <FPS.h>
#include <native/text/TextField.h>
#include <native/display/InteractiveObject.h>
#include <native/display/DisplayObject.h>
#include <cpp/Lib.h>
#include <native/Loader.h>
#include <native/display/IBitmapDrawable.h>
#include <native/events/EventDispatcher.h>
#include <native/events/IEventDispatcher.h>
#include <Date.h>
#include <ApplicationMain.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__register();
::zpp_nape::util::ZPP_PubPool_obj::__register();
::zpp_nape::util::ZPP_Math_obj::__register();
::zpp_nape::util::ZPP_ContactList_obj::__register();
::zpp_nape::util::ZPP_ArbiterList_obj::__register();
::zpp_nape::util::ZPP_InteractionGroupList_obj::__register();
::zpp_nape::util::ZPP_EdgeList_obj::__register();
::zpp_nape::util::ZPP_ShapeList_obj::__register();
::zpp_nape::util::ZPP_ConvexResultList_obj::__register();
::zpp_nape::util::ZPP_RayResultList_obj::__register();
::zpp_nape::util::ZPP_GeomPolyList_obj::__register();
::zpp_nape::util::ZPP_Vec2List_obj::__register();
::zpp_nape::util::ZPP_CbTypeList_obj::__register();
::zpp_nape::util::ZPP_ListenerList_obj::__register();
::zpp_nape::util::ZPP_CompoundList_obj::__register();
::zpp_nape::util::ZPP_InteractorList_obj::__register();
::zpp_nape::util::ZPP_BodyList_obj::__register();
::zpp_nape::util::ZPP_ConstraintList_obj::__register();
::zpp_nape::util::ZPP_MixVec2List_obj::__register();
::zpp_nape::util::ZNPNode_RayResult_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__register();
::zpp_nape::util::ZNPNode_ConvexResult_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Listener_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Component_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Body_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__register();
::zpp_nape::util::ZNPList_RayResult_obj::__register();
::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj::__register();
::zpp_nape::util::ZNPList_ConvexResult_obj::__register();
::zpp_nape::util::ZNPList_ZPP_InteractionGroup_obj::__register();
::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj::__register();
::zpp_nape::util::ZNPList_ZPP_ColArbiter_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Listener_obj::__register();
::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj::__register();
::zpp_nape::util::ZNPList_ZPP_FluidArbiter_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Component_obj::__register();
::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Edge_obj::__register();
::zpp_nape::util::ZNPList_ZPP_AABBPair_obj::__register();
::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj::__register();
::zpp_nape::util::ZNPList_ZPP_SimpleVert_obj::__register();
::zpp_nape::util::ZNPList_ZPP_SimplifyP_obj::__register();
::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__register();
::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__register();
::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CutVert_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CutInt_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CbSetPair_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Compound_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Body_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Shape_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CallbackSet_obj::__register();
::zpp_nape::util::ZPP_Flags_obj::__register();
::zpp_nape::util::FastHash2_Hashable2_Boolfalse_obj::__register();
::zpp_nape::util::Hashable2_Boolfalse_obj::__register();
::zpp_nape::util::ZPP_ShapeDebug_obj::__register();
::zpp_nape::util::ZPP_Debug_obj::__register();
::zpp_nape::util::ZNPArray2_ZPP_MarchPair_obj::__register();
::zpp_nape::util::ZNPArray2_ZPP_GeomVert_obj::__register();
::zpp_nape::util::ZNPArray2_Float_obj::__register();
::zpp_nape::space::ZPP_SweepPhase_obj::__register();
::zpp_nape::space::ZPP_SweepData_obj::__register();
::zpp_nape::space::ZPP_Space_obj::__register();
::zpp_nape::space::ZPP_CbSetManager_obj::__register();
::zpp_nape::space::ZPP_CallbackSet_obj::__register();
::zpp_nape::space::ZPP_Component_obj::__register();
::zpp_nape::space::ZPP_Island_obj::__register();
::zpp_nape::space::ZPP_DynAABBPhase_obj::__register();
::zpp_nape::space::ZPP_AABBTree_obj::__register();
::zpp_nape::space::ZPP_AABBPair_obj::__register();
::zpp_nape::space::ZPP_AABBNode_obj::__register();
::zpp_nape::space::ZPP_Broadphase_obj::__register();
::zpp_nape::shape::ZPP_Polygon_obj::__register();
::zpp_nape::shape::ZPP_Edge_obj::__register();
::zpp_nape::shape::ZPP_Circle_obj::__register();
::zpp_nape::shape::ZPP_Shape_obj::__register();
::zpp_nape::phys::ZPP_Material_obj::__register();
::zpp_nape::phys::ZPP_FluidProperties_obj::__register();
::zpp_nape::phys::ZPP_Compound_obj::__register();
::zpp_nape::phys::ZPP_Body_obj::__register();
::zpp_nape::phys::ZPP_Interactor_obj::__register();
::zpp_nape::geom::ZPP_VecMath_obj::__register();
::zpp_nape::geom::ZPP_Vec3_obj::__register();
::zpp_nape::geom::ZPP_Vec2_obj::__register();
::zpp_nape::geom::ZPP_Triangular_obj::__register();
::zpp_nape::geom::ZPP_PartitionPair_obj::__register();
::zpp_nape::geom::ZPP_SweepDistance_obj::__register();
::zpp_nape::geom::ZPP_ToiEvent_obj::__register();
::zpp_nape::geom::ZPP_Simplify_obj::__register();
::zpp_nape::geom::ZPP_SimplifyP_obj::__register();
::zpp_nape::geom::ZPP_SimplifyV_obj::__register();
::zpp_nape::geom::ZPP_Simple_obj::__register();
::zpp_nape::geom::ZPP_SimpleSweep_obj::__register();
::zpp_nape::geom::ZPP_SimpleEvent_obj::__register();
::zpp_nape::geom::ZPP_SimpleSeg_obj::__register();
::zpp_nape::geom::ZPP_SimpleVert_obj::__register();
::zpp_nape::geom::ZPP_Ray_obj::__register();
::zpp_nape::geom::ZPP_PartitionedPoly_obj::__register();
::zpp_nape::geom::ZPP_PartitionVertex_obj::__register();
::zpp_nape::geom::ZPP_Monotone_obj::__register();
::zpp_nape::geom::ZPP_MatMN_obj::__register();
::zpp_nape::geom::ZPP_Mat23_obj::__register();
::zpp_nape::geom::ZPP_MarchingSquares_obj::__register();
::zpp_nape::geom::ZPP_MarchPair_obj::__register();
::zpp_nape::geom::ZPP_MarchSpan_obj::__register();
::zpp_nape::geom::ZPP_GeomVertexIterator_obj::__register();
::zpp_nape::geom::ZPP_GeomPoly_obj::__register();
::zpp_nape::geom::ZPP_GeomVert_obj::__register();
::zpp_nape::geom::ZPP_Geom_obj::__register();
::zpp_nape::geom::ZPP_Cutter_obj::__register();
::zpp_nape::geom::ZPP_CutInt_obj::__register();
::zpp_nape::geom::ZPP_CutVert_obj::__register();
::zpp_nape::geom::ZPP_ConvexRayResult_obj::__register();
::zpp_nape::geom::ZPP_Convex_obj::__register();
::zpp_nape::geom::ZPP_Collide_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Vec2_obj::__register();
::zpp_nape::geom::ZPP_AABB_obj::__register();
::zpp_nape::dynamics::ZPP_SpaceArbiterList_obj::__register();
::zpp_nape::dynamics::ZPP_InteractionGroup_obj::__register();
::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__register();
::zpp_nape::dynamics::ZPP_IContact_obj::__register();
::zpp_nape::dynamics::ZPP_Contact_obj::__register();
::zpp_nape::dynamics::ZPP_ColArbiter_obj::__register();
::zpp_nape::dynamics::ZPP_FluidArbiter_obj::__register();
::zpp_nape::dynamics::ZPP_SensorArbiter_obj::__register();
::zpp_nape::dynamics::ZPP_Arbiter_obj::__register();
::zpp_nape::constraint::ZPP_WeldJoint_obj::__register();
::zpp_nape::constraint::ZPP_UserBody_obj::__register();
::zpp_nape::constraint::ZPP_UserConstraint_obj::__register();
::zpp_nape::constraint::ZPP_PulleyJoint_obj::__register();
::zpp_nape::constraint::ZPP_PivotJoint_obj::__register();
::zpp_nape::constraint::ZPP_MotorJoint_obj::__register();
::zpp_nape::constraint::ZPP_LineJoint_obj::__register();
::zpp_nape::constraint::ZPP_DistanceJoint_obj::__register();
::zpp_nape::constraint::ZPP_CopyHelper_obj::__register();
::zpp_nape::constraint::ZPP_AngleDraw_obj::__register();
::zpp_nape::constraint::ZPP_AngleJoint_obj::__register();
::zpp_nape::constraint::ZPP_Constraint_obj::__register();
::zpp_nape::callbacks::ZPP_OptionType_obj::__register();
::zpp_nape::callbacks::ZPP_InteractionListener_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CbType_obj::__register();
::zpp_nape::callbacks::ZPP_ConstraintListener_obj::__register();
::zpp_nape::callbacks::ZPP_BodyListener_obj::__register();
::zpp_nape::callbacks::ZPP_Listener_obj::__register();
::zpp_nape::callbacks::ZPP_CbType_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Interactor_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__register();
::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj::__register();
::zpp_nape::util::ZNPList_ZPP_BodyListener_obj::__register();
::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj::__register();
::zpp_nape::callbacks::ZPP_CbSetPair_obj::__register();
::zpp_nape::callbacks::ZPP_CbSet_obj::__register();
::zpp_nape::callbacks::ZPP_Callback_obj::__register();
::zpp_nape::ZPP_ID_obj::__register();
::zpp_nape::ZPP_Const_obj::__register();
::sys::io::Process_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::sys::io::FileSeek_obj::__register();
::sys::io::FileOutput_obj::__register();
::sys::io::FileInput_obj::__register();
::sys::io::File_obj::__register();
::sys::FileSystem_obj::__register();
::sys::_FileSystem::FileKind_obj::__register();
::nme::installer::Assets_obj::__register();
::nme::VectorHelper_obj::__register();
::nme::Lib_obj::__register();
::native::utils::WeakRef_obj::__register();
::native::utils::Timer_obj::__register();
::native::utils::Endian_obj::__register();
::native::utils::CompressionAlgorithm_obj::__register();
::native::utils::ByteArray_obj::__register();
::native::utils::IDataInput_obj::__register();
::native::utils::IMemoryRange_obj::__register();
::native::ui::Keyboard_obj::__register();
::native::text::TextFormat_obj::__register();
::native::text::TextFieldType_obj::__register();
::native::text::TextFieldAutoSize_obj::__register();
::native::text::FontType_obj::__register();
::native::text::FontStyle_obj::__register();
::native::text::Font_obj::__register();
::native::text::AntiAliasType_obj::__register();
::native::net::URLVariables_obj::__register();
::native::net::URLRequestMethod_obj::__register();
::native::net::URLRequestHeader_obj::__register();
::native::net::URLRequest_obj::__register();
::native::net::URLLoaderDataFormat_obj::__register();
::native::net::URLLoader_obj::__register();
::native::media::SoundTransform_obj::__register();
::native::media::SoundLoaderContext_obj::__register();
::native::media::SoundChannel_obj::__register();
::native::media::Sound_obj::__register();
::native::media::ID3Info_obj::__register();
::native::geom::Transform_obj::__register();
::native::geom::Rectangle_obj::__register();
::native::geom::Point_obj::__register();
::native::geom::Matrix_obj::__register();
::native::geom::ColorTransform_obj::__register();
::native::filters::BitmapFilter_obj::__register();
::native::events::TimerEvent_obj::__register();
::native::events::SampleDataEvent_obj::__register();
::native::events::ProgressEvent_obj::__register();
::native::events::KeyboardEvent_obj::__register();
::native::events::JoystickEvent_obj::__register();
::native::events::IOErrorEvent_obj::__register();
::native::events::HTTPStatusEvent_obj::__register();
::native::events::FocusEvent_obj::__register();
::native::events::EventPhase_obj::__register();
::native::events::Listener_obj::__register();
::native::events::ErrorEvent_obj::__register();
::native::events::TextEvent_obj::__register();
::native::errors::RangeError_obj::__register();
::native::errors::EOFError_obj::__register();
::native::errors::ArgumentError_obj::__register();
::native::errors::Error_obj::__register();
::native::display::TriangleCulling_obj::__register();
::native::display::Tilesheet_obj::__register();
::native::display::StageScaleMode_obj::__register();
::native::display::StageQuality_obj::__register();
::native::display::StageDisplayState_obj::__register();
::native::display::StageAlign_obj::__register();
::native::display::TouchInfo_obj::__register();
::native::display::SpreadMethod_obj::__register();
::native::display::Shape_obj::__register();
::native::display::PixelSnapping_obj::__register();
::native::display::MovieClip_obj::__register();
::native::display::ManagedStage_obj::__register();
::native::display::Stage_obj::__register();
::native::events::TouchEvent_obj::__register();
::native::events::MouseEvent_obj::__register();
::native::events::Event_obj::__register();
::native::display::LineScaleMode_obj::__register();
::native::display::JointStyle_obj::__register();
::native::display::InterpolationMethod_obj::__register();
::native::display::IGraphicsData_obj::__register();
::native::display::GraphicsPathWinding_obj::__register();
::native::display::Graphics_obj::__register();
::native::display::GradientType_obj::__register();
::native::display::CapsStyle_obj::__register();
::native::display::BlendMode_obj::__register();
::native::display::OptimizedPerlin_obj::__register();
::native::display::BitmapData_obj::__register();
::native::display::Bitmap_obj::__register();
::native::Lib_obj::__register();
::nape::util::ShapeDebug_obj::__register();
::nape::util::Debug_obj::__register();
::nape::space::Space_obj::__register();
::nape::space::Broadphase_obj::__register();
::nape::shape::ValidationResult_obj::__register();
::nape::shape::ShapeType_obj::__register();
::nape::shape::ShapeList_obj::__register();
::nape::shape::ShapeIterator_obj::__register();
::nape::shape::Polygon_obj::__register();
::nape::shape::EdgeList_obj::__register();
::nape::shape::EdgeIterator_obj::__register();
::nape::shape::Edge_obj::__register();
::nape::shape::Circle_obj::__register();
::nape::shape::Shape_obj::__register();
::nape::phys::Material_obj::__register();
::nape::phys::MassMode_obj::__register();
::nape::phys::InteractorList_obj::__register();
::nape::phys::InteractorIterator_obj::__register();
::nape::phys::InertiaMode_obj::__register();
::nape::phys::GravMassMode_obj::__register();
::nape::phys::FluidProperties_obj::__register();
::nape::phys::CompoundList_obj::__register();
::nape::phys::CompoundIterator_obj::__register();
::nape::phys::Compound_obj::__register();
::nape::phys::BodyType_obj::__register();
::nape::phys::BodyList_obj::__register();
::nape::phys::BodyIterator_obj::__register();
::nape::phys::Body_obj::__register();
::nape::phys::Interactor_obj::__register();
::nape::geom::Winding_obj::__register();
::nape::geom::Vec3_obj::__register();
::nape::geom::Vec2List_obj::__register();
::nape::geom::Vec2Iterator_obj::__register();
::nape::geom::Vec2_obj::__register();
::nape::geom::RayResultList_obj::__register();
::nape::geom::RayResultIterator_obj::__register();
::nape::geom::RayResult_obj::__register();
::nape::geom::Ray_obj::__register();
::nape::geom::MatMN_obj::__register();
::nape::geom::Mat23_obj::__register();
::nape::geom::MarchingSquares_obj::__register();
::nape::geom::GeomVertexIterator_obj::__register();
::nape::geom::GeomPolyList_obj::__register();
::nape::geom::GeomPolyIterator_obj::__register();
::nape::geom::GeomPoly_obj::__register();
::nape::geom::Geom_obj::__register();
::nape::geom::ConvexResultList_obj::__register();
::nape::geom::ConvexResultIterator_obj::__register();
::nape::geom::ConvexResult_obj::__register();
::nape::geom::AABB_obj::__register();
::nape::dynamics::InteractionGroupList_obj::__register();
::nape::dynamics::InteractionGroupIterator_obj::__register();
::nape::dynamics::InteractionGroup_obj::__register();
::nape::dynamics::InteractionFilter_obj::__register();
::nape::dynamics::FluidArbiter_obj::__register();
::nape::dynamics::ContactList_obj::__register();
::nape::dynamics::ContactIterator_obj::__register();
::nape::dynamics::Contact_obj::__register();
::nape::dynamics::CollisionArbiter_obj::__register();
::nape::dynamics::ArbiterType_obj::__register();
::nape::dynamics::ArbiterList_obj::__register();
::nape::dynamics::ArbiterIterator_obj::__register();
::nape::dynamics::Arbiter_obj::__register();
::nape::constraint::WeldJoint_obj::__register();
::nape::constraint::UserConstraint_obj::__register();
::nape::constraint::PulleyJoint_obj::__register();
::nape::constraint::PivotJoint_obj::__register();
::nape::constraint::MotorJoint_obj::__register();
::nape::constraint::LineJoint_obj::__register();
::nape::constraint::DistanceJoint_obj::__register();
::nape::constraint::ConstraintList_obj::__register();
::nape::constraint::ConstraintIterator_obj::__register();
::nape::constraint::AngleJoint_obj::__register();
::nape::constraint::Constraint_obj::__register();
::nape::callbacks::PreListener_obj::__register();
::nape::callbacks::PreFlag_obj::__register();
::nape::callbacks::PreCallback_obj::__register();
::nape::callbacks::OptionType_obj::__register();
::nape::callbacks::ListenerType_obj::__register();
::nape::callbacks::ListenerList_obj::__register();
::nape::callbacks::ListenerIterator_obj::__register();
::nape::callbacks::InteractionType_obj::__register();
::nape::callbacks::InteractionListener_obj::__register();
::nape::callbacks::InteractionCallback_obj::__register();
::nape::callbacks::ConstraintListener_obj::__register();
::nape::callbacks::ConstraintCallback_obj::__register();
::nape::callbacks::CbTypeList_obj::__register();
::nape::callbacks::CbTypeIterator_obj::__register();
::nape::callbacks::CbType_obj::__register();
::nape::callbacks::CbEvent_obj::__register();
::nape::callbacks::BodyListener_obj::__register();
::nape::callbacks::Listener_obj::__register();
::nape::callbacks::BodyCallback_obj::__register();
::nape::callbacks::Callback_obj::__register();
::nape::Config_obj::__register();
::haxe::io::Output_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Log_obj::__register();
::format::display::MovieClip_obj::__register();
::format::display::FrameLabel_obj::__register();
::cpp::zip::Uncompress_obj::__register();
::cpp::zip::Flush_obj::__register();
::cpp::zip::Compress_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::Sys_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Reflect_obj::__register();
::PhysicsData_obj::__register();
::Main_obj::__register();
::native::display::Sprite_obj::__register();
::native::display::DisplayObjectContainer_obj::__register();
::List_obj::__register();
::IntIter_obj::__register();
::IntHash_obj::__register();
::Hash_obj::__register();
::FPS_obj::__register();
::native::text::TextField_obj::__register();
::native::display::InteractiveObject_obj::__register();
::native::display::DisplayObject_obj::__register();
::cpp::Lib_obj::__register();
::native::Loader_obj::__register();
::native::display::IBitmapDrawable_obj::__register();
::native::events::EventDispatcher_obj::__register();
::native::events::IEventDispatcher_obj::__register();
::Date_obj::__register();
::ApplicationMain_obj::__register();
::native::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::zip::Compress_obj::__boot();
::cpp::zip::Flush_obj::__boot();
::cpp::zip::Uncompress_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::Date_obj::__boot();
::native::events::IEventDispatcher_obj::__boot();
::native::events::EventDispatcher_obj::__boot();
::native::display::IBitmapDrawable_obj::__boot();
::native::Loader_obj::__boot();
::native::display::DisplayObject_obj::__boot();
::native::display::InteractiveObject_obj::__boot();
::native::text::TextField_obj::__boot();
::FPS_obj::__boot();
::Hash_obj::__boot();
::IntHash_obj::__boot();
::IntIter_obj::__boot();
::List_obj::__boot();
::native::display::DisplayObjectContainer_obj::__boot();
::native::display::Sprite_obj::__boot();
::Main_obj::__boot();
::PhysicsData_obj::__boot();
::Reflect_obj::__boot();
::Std_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Sys_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::format::display::FrameLabel_obj::__boot();
::format::display::MovieClip_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Input_obj::__boot();
::haxe::io::Output_obj::__boot();
::nape::Config_obj::__boot();
::nape::callbacks::Callback_obj::__boot();
::nape::callbacks::BodyCallback_obj::__boot();
::nape::callbacks::Listener_obj::__boot();
::nape::callbacks::BodyListener_obj::__boot();
::nape::callbacks::CbEvent_obj::__boot();
::nape::callbacks::CbType_obj::__boot();
::nape::callbacks::CbTypeIterator_obj::__boot();
::nape::callbacks::CbTypeList_obj::__boot();
::nape::callbacks::ConstraintCallback_obj::__boot();
::nape::callbacks::ConstraintListener_obj::__boot();
::nape::callbacks::InteractionCallback_obj::__boot();
::nape::callbacks::InteractionListener_obj::__boot();
::nape::callbacks::InteractionType_obj::__boot();
::nape::callbacks::ListenerIterator_obj::__boot();
::nape::callbacks::ListenerList_obj::__boot();
::nape::callbacks::ListenerType_obj::__boot();
::nape::callbacks::OptionType_obj::__boot();
::nape::callbacks::PreCallback_obj::__boot();
::nape::callbacks::PreFlag_obj::__boot();
::nape::callbacks::PreListener_obj::__boot();
::nape::constraint::Constraint_obj::__boot();
::nape::constraint::AngleJoint_obj::__boot();
::nape::constraint::ConstraintIterator_obj::__boot();
::nape::constraint::ConstraintList_obj::__boot();
::nape::constraint::DistanceJoint_obj::__boot();
::nape::constraint::LineJoint_obj::__boot();
::nape::constraint::MotorJoint_obj::__boot();
::nape::constraint::PivotJoint_obj::__boot();
::nape::constraint::PulleyJoint_obj::__boot();
::nape::constraint::UserConstraint_obj::__boot();
::nape::constraint::WeldJoint_obj::__boot();
::nape::dynamics::Arbiter_obj::__boot();
::nape::dynamics::ArbiterIterator_obj::__boot();
::nape::dynamics::ArbiterList_obj::__boot();
::nape::dynamics::ArbiterType_obj::__boot();
::nape::dynamics::CollisionArbiter_obj::__boot();
::nape::dynamics::Contact_obj::__boot();
::nape::dynamics::ContactIterator_obj::__boot();
::nape::dynamics::ContactList_obj::__boot();
::nape::dynamics::FluidArbiter_obj::__boot();
::nape::dynamics::InteractionFilter_obj::__boot();
::nape::dynamics::InteractionGroup_obj::__boot();
::nape::dynamics::InteractionGroupIterator_obj::__boot();
::nape::dynamics::InteractionGroupList_obj::__boot();
::nape::geom::AABB_obj::__boot();
::nape::geom::ConvexResult_obj::__boot();
::nape::geom::ConvexResultIterator_obj::__boot();
::nape::geom::ConvexResultList_obj::__boot();
::nape::geom::Geom_obj::__boot();
::nape::geom::GeomPoly_obj::__boot();
::nape::geom::GeomPolyIterator_obj::__boot();
::nape::geom::GeomPolyList_obj::__boot();
::nape::geom::GeomVertexIterator_obj::__boot();
::nape::geom::MarchingSquares_obj::__boot();
::nape::geom::Mat23_obj::__boot();
::nape::geom::MatMN_obj::__boot();
::nape::geom::Ray_obj::__boot();
::nape::geom::RayResult_obj::__boot();
::nape::geom::RayResultIterator_obj::__boot();
::nape::geom::RayResultList_obj::__boot();
::nape::geom::Vec2_obj::__boot();
::nape::geom::Vec2Iterator_obj::__boot();
::nape::geom::Vec2List_obj::__boot();
::nape::geom::Vec3_obj::__boot();
::nape::geom::Winding_obj::__boot();
::nape::phys::Interactor_obj::__boot();
::nape::phys::Body_obj::__boot();
::nape::phys::BodyIterator_obj::__boot();
::nape::phys::BodyList_obj::__boot();
::nape::phys::BodyType_obj::__boot();
::nape::phys::Compound_obj::__boot();
::nape::phys::CompoundIterator_obj::__boot();
::nape::phys::CompoundList_obj::__boot();
::nape::phys::FluidProperties_obj::__boot();
::nape::phys::GravMassMode_obj::__boot();
::nape::phys::InertiaMode_obj::__boot();
::nape::phys::InteractorIterator_obj::__boot();
::nape::phys::InteractorList_obj::__boot();
::nape::phys::MassMode_obj::__boot();
::nape::phys::Material_obj::__boot();
::nape::shape::Shape_obj::__boot();
::nape::shape::Circle_obj::__boot();
::nape::shape::Edge_obj::__boot();
::nape::shape::EdgeIterator_obj::__boot();
::nape::shape::EdgeList_obj::__boot();
::nape::shape::Polygon_obj::__boot();
::nape::shape::ShapeIterator_obj::__boot();
::nape::shape::ShapeList_obj::__boot();
::nape::shape::ShapeType_obj::__boot();
::nape::shape::ValidationResult_obj::__boot();
::nape::space::Broadphase_obj::__boot();
::nape::space::Space_obj::__boot();
::nape::util::Debug_obj::__boot();
::nape::util::ShapeDebug_obj::__boot();
::native::Lib_obj::__boot();
::native::display::Bitmap_obj::__boot();
::native::display::BitmapData_obj::__boot();
::native::display::OptimizedPerlin_obj::__boot();
::native::display::BlendMode_obj::__boot();
::native::display::CapsStyle_obj::__boot();
::native::display::GradientType_obj::__boot();
::native::display::Graphics_obj::__boot();
::native::display::GraphicsPathWinding_obj::__boot();
::native::display::IGraphicsData_obj::__boot();
::native::display::InterpolationMethod_obj::__boot();
::native::display::JointStyle_obj::__boot();
::native::display::LineScaleMode_obj::__boot();
::native::events::Event_obj::__boot();
::native::events::MouseEvent_obj::__boot();
::native::events::TouchEvent_obj::__boot();
::native::display::Stage_obj::__boot();
::native::display::ManagedStage_obj::__boot();
::native::display::MovieClip_obj::__boot();
::native::display::PixelSnapping_obj::__boot();
::native::display::Shape_obj::__boot();
::native::display::SpreadMethod_obj::__boot();
::native::display::TouchInfo_obj::__boot();
::native::display::StageAlign_obj::__boot();
::native::display::StageDisplayState_obj::__boot();
::native::display::StageQuality_obj::__boot();
::native::display::StageScaleMode_obj::__boot();
::native::display::Tilesheet_obj::__boot();
::native::display::TriangleCulling_obj::__boot();
::native::errors::Error_obj::__boot();
::native::errors::ArgumentError_obj::__boot();
::native::errors::EOFError_obj::__boot();
::native::errors::RangeError_obj::__boot();
::native::events::TextEvent_obj::__boot();
::native::events::ErrorEvent_obj::__boot();
::native::events::Listener_obj::__boot();
::native::events::EventPhase_obj::__boot();
::native::events::FocusEvent_obj::__boot();
::native::events::HTTPStatusEvent_obj::__boot();
::native::events::IOErrorEvent_obj::__boot();
::native::events::JoystickEvent_obj::__boot();
::native::events::KeyboardEvent_obj::__boot();
::native::events::ProgressEvent_obj::__boot();
::native::events::SampleDataEvent_obj::__boot();
::native::events::TimerEvent_obj::__boot();
::native::filters::BitmapFilter_obj::__boot();
::native::geom::ColorTransform_obj::__boot();
::native::geom::Matrix_obj::__boot();
::native::geom::Point_obj::__boot();
::native::geom::Rectangle_obj::__boot();
::native::geom::Transform_obj::__boot();
::native::media::ID3Info_obj::__boot();
::native::media::Sound_obj::__boot();
::native::media::SoundChannel_obj::__boot();
::native::media::SoundLoaderContext_obj::__boot();
::native::media::SoundTransform_obj::__boot();
::native::net::URLLoader_obj::__boot();
::native::net::URLLoaderDataFormat_obj::__boot();
::native::net::URLRequest_obj::__boot();
::native::net::URLRequestHeader_obj::__boot();
::native::net::URLRequestMethod_obj::__boot();
::native::net::URLVariables_obj::__boot();
::native::text::AntiAliasType_obj::__boot();
::native::text::Font_obj::__boot();
::native::text::FontStyle_obj::__boot();
::native::text::FontType_obj::__boot();
::native::text::TextFieldAutoSize_obj::__boot();
::native::text::TextFieldType_obj::__boot();
::native::text::TextFormat_obj::__boot();
::native::ui::Keyboard_obj::__boot();
::native::utils::IMemoryRange_obj::__boot();
::native::utils::IDataInput_obj::__boot();
::native::utils::ByteArray_obj::__boot();
::native::utils::CompressionAlgorithm_obj::__boot();
::native::utils::Endian_obj::__boot();
::native::utils::Timer_obj::__boot();
::native::utils::WeakRef_obj::__boot();
::nme::Lib_obj::__boot();
::nme::VectorHelper_obj::__boot();
::nme::installer::Assets_obj::__boot();
::sys::_FileSystem::FileKind_obj::__boot();
::sys::FileSystem_obj::__boot();
::sys::io::File_obj::__boot();
::sys::io::FileInput_obj::__boot();
::sys::io::FileOutput_obj::__boot();
::sys::io::FileSeek_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::sys::io::Process_obj::__boot();
::zpp_nape::ZPP_Const_obj::__boot();
::zpp_nape::ZPP_ID_obj::__boot();
::zpp_nape::callbacks::ZPP_Callback_obj::__boot();
::zpp_nape::callbacks::ZPP_CbSet_obj::__boot();
::zpp_nape::callbacks::ZPP_CbSetPair_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_BodyListener_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Interactor_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__boot();
::zpp_nape::callbacks::ZPP_CbType_obj::__boot();
::zpp_nape::callbacks::ZPP_Listener_obj::__boot();
::zpp_nape::callbacks::ZPP_BodyListener_obj::__boot();
::zpp_nape::callbacks::ZPP_ConstraintListener_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_CbType_obj::__boot();
::zpp_nape::callbacks::ZPP_InteractionListener_obj::__boot();
::zpp_nape::callbacks::ZPP_OptionType_obj::__boot();
::zpp_nape::constraint::ZPP_Constraint_obj::__boot();
::zpp_nape::constraint::ZPP_AngleJoint_obj::__boot();
::zpp_nape::constraint::ZPP_AngleDraw_obj::__boot();
::zpp_nape::constraint::ZPP_CopyHelper_obj::__boot();
::zpp_nape::constraint::ZPP_DistanceJoint_obj::__boot();
::zpp_nape::constraint::ZPP_LineJoint_obj::__boot();
::zpp_nape::constraint::ZPP_MotorJoint_obj::__boot();
::zpp_nape::constraint::ZPP_PivotJoint_obj::__boot();
::zpp_nape::constraint::ZPP_PulleyJoint_obj::__boot();
::zpp_nape::constraint::ZPP_UserConstraint_obj::__boot();
::zpp_nape::constraint::ZPP_UserBody_obj::__boot();
::zpp_nape::constraint::ZPP_WeldJoint_obj::__boot();
::zpp_nape::dynamics::ZPP_Arbiter_obj::__boot();
::zpp_nape::dynamics::ZPP_SensorArbiter_obj::__boot();
::zpp_nape::dynamics::ZPP_FluidArbiter_obj::__boot();
::zpp_nape::dynamics::ZPP_ColArbiter_obj::__boot();
::zpp_nape::dynamics::ZPP_Contact_obj::__boot();
::zpp_nape::dynamics::ZPP_IContact_obj::__boot();
::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__boot();
::zpp_nape::dynamics::ZPP_InteractionGroup_obj::__boot();
::zpp_nape::dynamics::ZPP_SpaceArbiterList_obj::__boot();
::zpp_nape::geom::ZPP_AABB_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Vec2_obj::__boot();
::zpp_nape::geom::ZPP_Collide_obj::__boot();
::zpp_nape::geom::ZPP_Convex_obj::__boot();
::zpp_nape::geom::ZPP_ConvexRayResult_obj::__boot();
::zpp_nape::geom::ZPP_CutVert_obj::__boot();
::zpp_nape::geom::ZPP_CutInt_obj::__boot();
::zpp_nape::geom::ZPP_Cutter_obj::__boot();
::zpp_nape::geom::ZPP_Geom_obj::__boot();
::zpp_nape::geom::ZPP_GeomVert_obj::__boot();
::zpp_nape::geom::ZPP_GeomPoly_obj::__boot();
::zpp_nape::geom::ZPP_GeomVertexIterator_obj::__boot();
::zpp_nape::geom::ZPP_MarchSpan_obj::__boot();
::zpp_nape::geom::ZPP_MarchPair_obj::__boot();
::zpp_nape::geom::ZPP_MarchingSquares_obj::__boot();
::zpp_nape::geom::ZPP_Mat23_obj::__boot();
::zpp_nape::geom::ZPP_MatMN_obj::__boot();
::zpp_nape::geom::ZPP_Monotone_obj::__boot();
::zpp_nape::geom::ZPP_PartitionVertex_obj::__boot();
::zpp_nape::geom::ZPP_PartitionedPoly_obj::__boot();
::zpp_nape::geom::ZPP_Ray_obj::__boot();
::zpp_nape::geom::ZPP_SimpleVert_obj::__boot();
::zpp_nape::geom::ZPP_SimpleSeg_obj::__boot();
::zpp_nape::geom::ZPP_SimpleEvent_obj::__boot();
::zpp_nape::geom::ZPP_SimpleSweep_obj::__boot();
::zpp_nape::geom::ZPP_Simple_obj::__boot();
::zpp_nape::geom::ZPP_SimplifyV_obj::__boot();
::zpp_nape::geom::ZPP_SimplifyP_obj::__boot();
::zpp_nape::geom::ZPP_Simplify_obj::__boot();
::zpp_nape::geom::ZPP_ToiEvent_obj::__boot();
::zpp_nape::geom::ZPP_SweepDistance_obj::__boot();
::zpp_nape::geom::ZPP_PartitionPair_obj::__boot();
::zpp_nape::geom::ZPP_Triangular_obj::__boot();
::zpp_nape::geom::ZPP_Vec2_obj::__boot();
::zpp_nape::geom::ZPP_Vec3_obj::__boot();
::zpp_nape::geom::ZPP_VecMath_obj::__boot();
::zpp_nape::phys::ZPP_Interactor_obj::__boot();
::zpp_nape::phys::ZPP_Body_obj::__boot();
::zpp_nape::phys::ZPP_Compound_obj::__boot();
::zpp_nape::phys::ZPP_FluidProperties_obj::__boot();
::zpp_nape::phys::ZPP_Material_obj::__boot();
::zpp_nape::shape::ZPP_Shape_obj::__boot();
::zpp_nape::shape::ZPP_Circle_obj::__boot();
::zpp_nape::shape::ZPP_Edge_obj::__boot();
::zpp_nape::shape::ZPP_Polygon_obj::__boot();
::zpp_nape::space::ZPP_Broadphase_obj::__boot();
::zpp_nape::space::ZPP_AABBNode_obj::__boot();
::zpp_nape::space::ZPP_AABBPair_obj::__boot();
::zpp_nape::space::ZPP_AABBTree_obj::__boot();
::zpp_nape::space::ZPP_DynAABBPhase_obj::__boot();
::zpp_nape::space::ZPP_Island_obj::__boot();
::zpp_nape::space::ZPP_Component_obj::__boot();
::zpp_nape::space::ZPP_CallbackSet_obj::__boot();
::zpp_nape::space::ZPP_CbSetManager_obj::__boot();
::zpp_nape::space::ZPP_Space_obj::__boot();
::zpp_nape::space::ZPP_SweepData_obj::__boot();
::zpp_nape::space::ZPP_SweepPhase_obj::__boot();
::zpp_nape::util::ZNPArray2_Float_obj::__boot();
::zpp_nape::util::ZNPArray2_ZPP_GeomVert_obj::__boot();
::zpp_nape::util::ZNPArray2_ZPP_MarchPair_obj::__boot();
::zpp_nape::util::ZPP_Debug_obj::__boot();
::zpp_nape::util::ZPP_ShapeDebug_obj::__boot();
::zpp_nape::util::Hashable2_Boolfalse_obj::__boot();
::zpp_nape::util::FastHash2_Hashable2_Boolfalse_obj::__boot();
::zpp_nape::util::ZPP_Flags_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_CallbackSet_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Shape_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Body_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Compound_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_CbSetPair_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_CutInt_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_CutVert_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_SimplifyP_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_SimpleVert_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_AABBPair_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Edge_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Component_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_FluidArbiter_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Listener_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_ColArbiter_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_InteractionGroup_obj::__boot();
::zpp_nape::util::ZNPList_ConvexResult_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj::__boot();
::zpp_nape::util::ZNPList_RayResult_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Body_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Component_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Listener_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__boot();
::zpp_nape::util::ZNPNode_ConvexResult_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__boot();
::zpp_nape::util::ZNPNode_RayResult_obj::__boot();
::zpp_nape::util::ZPP_MixVec2List_obj::__boot();
::zpp_nape::util::ZPP_ConstraintList_obj::__boot();
::zpp_nape::util::ZPP_BodyList_obj::__boot();
::zpp_nape::util::ZPP_InteractorList_obj::__boot();
::zpp_nape::util::ZPP_CompoundList_obj::__boot();
::zpp_nape::util::ZPP_ListenerList_obj::__boot();
::zpp_nape::util::ZPP_CbTypeList_obj::__boot();
::zpp_nape::util::ZPP_Vec2List_obj::__boot();
::zpp_nape::util::ZPP_GeomPolyList_obj::__boot();
::zpp_nape::util::ZPP_RayResultList_obj::__boot();
::zpp_nape::util::ZPP_ConvexResultList_obj::__boot();
::zpp_nape::util::ZPP_ShapeList_obj::__boot();
::zpp_nape::util::ZPP_EdgeList_obj::__boot();
::zpp_nape::util::ZPP_InteractionGroupList_obj::__boot();
::zpp_nape::util::ZPP_ArbiterList_obj::__boot();
::zpp_nape::util::ZPP_ContactList_obj::__boot();
::zpp_nape::util::ZPP_Math_obj::__boot();
::zpp_nape::util::ZPP_PubPool_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__boot();
}

