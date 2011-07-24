<?php

// Get the project nid
$pro_node = menu_get_object();
$pro_nid = $pro_node->nid;

// Get User Story varrs ready
$as_a = $fields['field_as_a']->content;
$would = $fields['field_i_would_like_to']->content;
$so_that = isset($fields['field_so_that']->content) ? $fields['field_so_that']->content : '';
$nid = $fields['nid']->raw;
$edit = l('Edit', 'node/'.$nid.'/edit', array('query' => array('destination' => url('node/'.$pro_nid))));
$hash = substr(md5(rand(0,9999999)), 0, 5);

// Find all tasks that belong to this story
$query = db_select('field_data_field_user_story', 'us')
  ->fields('us', array('entity_id'))
  ->condition('us.field_user_story_nid', $nid, '=');
$results = $query->execute();

// Get the "tasks" variables ready
$tasks = array();
foreach ($results as $result) {
  $task = array();
  $task['node'] = node_load($result->entity_id);
  $task['status'] = empty($task['node']->field_completed_by) ? 0 : 1;  
  $task['points'] = $task['node']->field_points['und'][0]['value'];
  $task['task'] = $task['node']->field_task['und'][0]['value'];
  $task['edit'] = l('Edit', 'node/'.$task['node']->nid.'/edit', array('query' => array('destination' => url('node/'.$pro_nid))));

  $tasks[] = $task;
}

?>
<div class="user-story">
<?php print $nid ?> - 
As a <?php print $as_a ?>,
I would like to <?php print $would ?>
<?php print empty($so_that) ? '' : ', So that '.$so_that; ?>
</div>
<div class="tasks">
  <div>
    <span class="open-close" onclick="javascript:jQuery('.task-list.<?php print $hash ?>').slideToggle();">Tasks (<?php print count($tasks) ?>)</span>
    <?php print empty($edit) ? '' : ' | '.$edit; ?>
  </div>
  <div class="task-list <?php print $hash ?>">
    <ul>
      <li class="add-task"><?php print l('Add Task', 'node/add/project-tasks/'.$nid, array('query' => array('destination' => url('node/'.$pro_nid)))) ?></li>
      <?php foreach ($tasks as $task) { ?>
      <li class="task">
      <?php print $task['node']->nid ?> -
      <?php print $task['task'] ?>
        <div class="task-status">
          Points: <?php print $task['points'] ?>
          | Status: <?php print $task['status'] ?>
          <?php print empty($task['edit']) ? '' : ' | '.$task['edit']; ?>
        </div>
      </li>
      <?php } ?>
    </ul>
  </div>
</div>
