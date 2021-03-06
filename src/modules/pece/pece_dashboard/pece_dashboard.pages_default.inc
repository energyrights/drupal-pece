<?php

/**
 * @file
 * pece_dashboard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function pece_dashboard_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'pece_user_dashboard';
  $page->task = 'page';
  $page->admin_title = 'PECE Dashboard';
  $page->admin_description = '';
  $page->path = 'user/dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
            1 => 3,
            2 => 4,
            3 => 6,
            4 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Dashboard',
    'name' => 'user-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_pece_user_dashboard__panel_context_7278b997-8c41-4b64-910f-f4b37fb53dd0';
  $handler->task = 'page';
  $handler->subtask = 'pece_user_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User Dashboard',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'pece_sidebar_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
    ),
    'content' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'eb338d0e-e9ec-44fb-b82f-819311de351b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_pece_user_dashboard__panel_context_7278b997-8c41-4b64-910f-f4b37fb53dd0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-db335407-5445-4bcc-aa52-49eb2cec2495';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'pece_my_groups-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'context_user_1',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => FALSE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'db335407-5445-4bcc-aa52-49eb2cec2495';
  $display->content['new-db335407-5445-4bcc-aa52-49eb2cec2495'] = $pane;
  $display->panels['content'][0] = 'new-db335407-5445-4bcc-aa52-49eb2cec2495';
  $pane = new stdClass();
  $pane->pid = 'new-0fdeb287-7a3c-4ae7-bcbc-3e875e8102f6';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'pece_my_projects-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => FALSE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0fdeb287-7a3c-4ae7-bcbc-3e875e8102f6';
  $display->content['new-0fdeb287-7a3c-4ae7-bcbc-3e875e8102f6'] = $pane;
  $display->panels['content'][1] = 'new-0fdeb287-7a3c-4ae7-bcbc-3e875e8102f6';
  $pane = new stdClass();
  $pane->pid = 'new-caf5f999-9044-4367-b67a-90d64065cf2b';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'pece_my_artifacts-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'mini_teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'caf5f999-9044-4367-b67a-90d64065cf2b';
  $display->content['new-caf5f999-9044-4367-b67a-90d64065cf2b'] = $pane;
  $display->panels['content'][2] = 'new-caf5f999-9044-4367-b67a-90d64065cf2b';
  $pane = new stdClass();
  $pane->pid = 'new-d98f426d-a37e-476c-b537-e12e28c0f32c';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'pece_my_memos-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd98f426d-a37e-476c-b537-e12e28c0f32c';
  $display->content['new-d98f426d-a37e-476c-b537-e12e28c0f32c'] = $pane;
  $display->panels['content'][3] = 'new-d98f426d-a37e-476c-b537-e12e28c0f32c';
  $pane = new stdClass();
  $pane->pid = 'new-c113f8f7-6e9e-4a16-9a84-f4c5b5d7dcfc';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'pece_my_noted_artifacts-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c113f8f7-6e9e-4a16-9a84-f4c5b5d7dcfc';
  $display->content['new-c113f8f7-6e9e-4a16-9a84-f4c5b5d7dcfc'] = $pane;
  $display->panels['content'][4] = 'new-c113f8f7-6e9e-4a16-9a84-f4c5b5d7dcfc';
  $pane = new stdClass();
  $pane->pid = 'new-08121391-829b-4686-a2e1-d831311cb59a';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'pece_my_annotations-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'mini_teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '08121391-829b-4686-a2e1-d831311cb59a';
  $display->content['new-08121391-829b-4686-a2e1-d831311cb59a'] = $pane;
  $display->panels['content'][5] = 'new-08121391-829b-4686-a2e1-d831311cb59a';
  $pane = new stdClass();
  $pane->pid = 'new-60cb69ad-36f0-4f50-a301-351064ff312b';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'pece_my_analytics-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '60cb69ad-36f0-4f50-a301-351064ff312b';
  $display->content['new-60cb69ad-36f0-4f50-a301-351064ff312b'] = $pane;
  $display->panels['content'][6] = 'new-60cb69ad-36f0-4f50-a301-351064ff312b';
  $pane = new stdClass();
  $pane->pid = 'new-f1d2834d-f05f-479a-9a69-a60937648921';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'pece_my_fieldsites-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'f1d2834d-f05f-479a-9a69-a60937648921';
  $display->content['new-f1d2834d-f05f-479a-9a69-a60937648921'] = $pane;
  $display->panels['content'][7] = 'new-f1d2834d-f05f-479a-9a69-a60937648921';
  $pane = new stdClass();
  $pane->pid = 'new-d4419201-14ea-4496-b418-6f199399721b';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'pece_user_field_diary-pece_user_field_diary';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'd4419201-14ea-4496-b418-6f199399721b';
  $display->content['new-d4419201-14ea-4496-b418-6f199399721b'] = $pane;
  $display->panels['content'][8] = 'new-d4419201-14ea-4496-b418-6f199399721b';
  $pane = new stdClass();
  $pane->pid = 'new-0d1aa060-3ae9-4588-9612-58cef304ee92';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'pece_my_biblio_items-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '0d1aa060-3ae9-4588-9612-58cef304ee92';
  $display->content['new-0d1aa060-3ae9-4588-9612-58cef304ee92'] = $pane;
  $display->panels['content'][9] = 'new-0d1aa060-3ae9-4588-9612-58cef304ee92';
  $pane = new stdClass();
  $pane->pid = 'new-20c5ca8a-7d70-4f1d-ab74-bd8dad400e52';
  $pane->panel = 'content';
  $pane->type = 'panels_mini';
  $pane->subtype = 'pece_dashb_tab_pece_essay';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'PECE Essays',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '20c5ca8a-7d70-4f1d-ab74-bd8dad400e52';
  $display->content['new-20c5ca8a-7d70-4f1d-ab74-bd8dad400e52'] = $pane;
  $display->panels['content'][10] = 'new-20c5ca8a-7d70-4f1d-ab74-bd8dad400e52';
  $pane = new stdClass();
  $pane->pid = 'new-298d9f18-8675-409e-a6c3-b5551e51a9e2';
  $pane->panel = 'content';
  $pane->type = 'panels_mini';
  $pane->subtype = 'pece_dashb_tab_photo_essay';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Photo Essays',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '298d9f18-8675-409e-a6c3-b5551e51a9e2';
  $display->content['new-298d9f18-8675-409e-a6c3-b5551e51a9e2'] = $pane;
  $display->panels['content'][11] = 'new-298d9f18-8675-409e-a6c3-b5551e51a9e2';
  $pane = new stdClass();
  $pane->pid = 'new-f3019bf2-4139-4732-86d9-e5e199997f2f';
  $pane->panel = 'content';
  $pane->type = 'panels_mini';
  $pane->subtype = 'pece_dashb_tab_timeline_essay';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Timeline Essays',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'f3019bf2-4139-4732-86d9-e5e199997f2f';
  $display->content['new-f3019bf2-4139-4732-86d9-e5e199997f2f'] = $pane;
  $display->panels['content'][12] = 'new-f3019bf2-4139-4732-86d9-e5e199997f2f';
  $pane = new stdClass();
  $pane->pid = 'new-a6f2d74c-68d6-4670-a3b6-17ecf3d36a20';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'pece_dashboard-dashboard_add_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a6f2d74c-68d6-4670-a3b6-17ecf3d36a20';
  $display->content['new-a6f2d74c-68d6-4670-a3b6-17ecf3d36a20'] = $pane;
  $display->panels['sidebar'][0] = 'new-a6f2d74c-68d6-4670-a3b6-17ecf3d36a20';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['pece_user_dashboard'] = $page;

  return $pages;

}
