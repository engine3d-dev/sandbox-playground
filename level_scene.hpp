#pragma once
#include <core/core.hpp>
#include <core/scene/scene.hpp>
#include <core/scene/scene_object.hpp>

class main_scene : public atlas::scene_scope {
public:
    main_scene(const std::string& p_tag);

    ~main_scene() override = default;

    //! @note Remove these from being overridden
    //! TODO: We should have an indication on what functions are update phased
    //! functions
    void on_update();

    void on_ui_update();

    //! TODO: Remove this and integrate a few functions into LevelScene such as
    //! on_runtime_start/on_runtime_stop
    void on_physics_update();

private:
    atlas::ref<atlas::scene_object> m_sphere;
    atlas::ref<atlas::scene_object> m_camera;
    atlas::ref<atlas::scene_object> m_viking_room=nullptr;
    atlas::optional_ref<atlas::scene_object> m_optional_object;

};