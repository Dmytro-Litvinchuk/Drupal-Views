<?php

/**
 * Implements hook_views_data().
 */
function custom_views_views_data() {
  $data = [];
  $data['pets_owners_storage'] = [];
  $data['pets_owners_storage']['table'] = [];
  $data['pets_owners_storage']['table']['group'] = t('Pets owners');
  $data['pets_owners_storage']['table']['provider'] = 'pets_owners_storage';
  $data['pets_owners_storage']['table']['base'] = [
    'field' => 'pid',
    'title' => t('Pets owners'),
    'help' => t('Pets table contains all pets owners.'),
  ];

  // All fields.
  $data['pets_owners_storage']['pid'] = [
    'title' => t('pid'),
    'help' => t('primary key'),
    'field' => [
      'id' => 'standard',
    ],
  ];
  $data['pets_owners_storage']['prefix'] = [
    'title' => t('prefix'),
    'help' => t('field prefix'),
    'field' => [
      'id' => 'standard',
    ],
    // Without this sorting not work.
    'sort' => [
      'id' => 'standard',
    ],
    'filter' => [
      'title' => t('User gender'),
      'help' => t('Specify a list of gender'),
      'field' => 'prefix',
      'id' => 'custom_views_gender',
    ],
  ];
  $data['pets_owners_storage']['name'] = [
    'title' => t('name'),
    'help' => t('user name'),
    'field' => [
      'id' => 'standard',
    ],
    'sort' => [
      'id' => 'standard',
    ],
    // Must be for filter.
    'filter' => [
      'id' => 'string',
    ],
  ];
  $data['pets_owners_storage']['gender'] = [
    'title' => t('gender'),
    'help' => t('user gender'),
    'field' => [
      'id' => 'standard',
    ],
    'sort' => [
      'id' => 'standard',
    ],
    'filter' => [
      'id' => 'string',
    ],
  ];
  $data['pets_owners_storage']['age'] = [
    'title' => t('age'),
    'help' => t('user age'),
    'field' => [
      'id' => 'numeric',
    ],
    'sort' => [
      'id' => 'standard',
    ],
  ];
  $data['pets_owners_storage']['father'] = [
    'title' => t('father'),
    'help' => t('father`s name'),
    'field' => [
      'id' => 'standard',
    ],
    'sort' => [
      'id' => 'standard',
    ],
    'filter' => [
      'id' => 'string',
    ],
  ];
  $data['pets_owners_storage']['mother'] = [
    'title' => t('mother'),
    'help' => t('mother`s name'),
    'field' => [
      'id' => 'standard',
    ],
    'sort' => [
      'id' => 'standard',
    ],
    'filter' => [
      'id' => 'string',
    ],
  ];
  $data['pets_owners_storage']['pets_name'] = [
    'title' => t('pets'),
    'help' => t('pet`s name'),
    'field' => [
      'id' => 'standard',
    ],
    'sort' => [
      'id' => 'standard',
    ],
    'filter' => [
      'id' => 'string',
    ],
  ];
  $data['pets_owners_storage']['email'] = [
    'title' => t('email'),
    'help' => t('user email'),
    'field' => [
      'id' => 'standard',
    ],
    'sort' => [
      'id' => 'standard',
    ],
    'filter' => [
      'id' => 'string',
    ],
  ];

  return $data;
}
