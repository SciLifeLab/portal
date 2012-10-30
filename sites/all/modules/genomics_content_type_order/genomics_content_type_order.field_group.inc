<?php
/**
 * @file
 * genomics_content_type_order.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function genomics_content_type_order_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bioinformatics|node|order|default';
  $field_group->group_name = 'group_bioinformatics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_tab2';
  $field_group->data = array(
    'label' => 'Bioinformatics',
    'weight' => '9',
    'children' => array(
      0 => 'field_bioinformatics_expertise_i',
      1 => 'field_previous_experience_with_n',
      2 => 'field_best_practice_basic_analys',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-bioinformatics field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bioinformatics|node|order|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bioinformatics|node|order|form';
  $field_group->group_name = 'group_bioinformatics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bioinformatics',
    'weight' => '7',
    'children' => array(
      0 => 'field_bioinformatics_expertise_i',
      1 => 'field_previous_experience_with_n',
      2 => 'field_best_practice_basic_analys',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bioinformatics',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_bioinformatics|node|order|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flx|node|order|default';
  $field_group->group_name = 'group_flx';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_tab2';
  $field_group->data = array(
    'label' => 'GS FLX / GS FLX+ ',
    'weight' => '5',
    'children' => array(
      0 => 'field_flx_method',
      1 => 'field_flx_library',
      2 => 'field_total_number_of_picotiter_',
      3 => 'field_regions_per_plate',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'GS FLX / GS FLX+ ',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-flx field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_flx|node|order|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flx|node|order|form';
  $field_group->group_name = 'group_flx';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GS FLX / GS FLX+ ',
    'weight' => '3',
    'children' => array(
      0 => 'field_flx_method',
      1 => 'field_flx_library',
      2 => 'field_total_number_of_picotiter_',
      3 => 'field_regions_per_plate',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'GS FLX / GS FLX+ ',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_flx|node|order|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gen_info|node|order|default';
  $field_group->group_name = 'group_gen_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_tab2';
  $field_group->data = array(
    'label' => 'General info',
    'weight' => '2',
    'children' => array(
      0 => 'field_file_attachments',
      1 => 'field_existing_uppnex_project',
      2 => 'field_your_project_name',
      3 => 'field_geninfo_purpose_of_the_inv',
      4 => 'group_new_uppnex_project_registr',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'General info',
      'instance_settings' => array(
        'classes' => ' group-gen-info field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_gen_info|node|order|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gen_info|node|order|form';
  $field_group->group_name = 'group_gen_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General info',
    'weight' => '1',
    'children' => array(
      0 => 'field_file_attachments',
      1 => 'field_existing_uppnex_project',
      2 => 'field_your_project_name',
      3 => 'field_geninfo_purpose_of_the_inv',
      4 => 'title',
      5 => 'group_new_uppnex_project_registr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gen_info|node|order|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_illumina_setup|node|order|default';
  $field_group->group_name = 'group_illumina_setup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_tab2';
  $field_group->data = array(
    'label' => 'Illumina setup ',
    'weight' => '6',
    'children' => array(
      0 => 'field_instrument',
      1 => 'field_illumina_number_of_lanes',
      2 => 'field_hiseq_config',
      3 => 'field_hiseq_config_other',
      4 => 'field_miseq_config',
      5 => 'field_miseq_config_other',
      6 => 'field_illumina_sample_type',
      7 => 'field_illumina_type_of_rnaseq',
      8 => 'field_illumina_dna_insert_size',
      9 => 'field_illumintype_of_dna_library',
      10 => 'field_illumina_dna_type_of_enri',
      11 => 'field_illumina_mrna_enrichment',
      12 => 'field_illumina_paired_end',
      13 => 'field_illumina_hiseq_cycles_tot',
      14 => 'field_illumina_hiseq_pe_fals_oth',
      15 => 'field_ilummina_custom_enrichment',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-illumina-setup field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_illumina_setup|node|order|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_illumina_setup|node|order|form';
  $field_group->group_name = 'group_illumina_setup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Illumina',
    'weight' => '4',
    'children' => array(
      0 => 'field_instrument',
      1 => 'field_illumina_number_of_lanes',
      2 => 'field_hiseq_config',
      3 => 'field_hiseq_config_other',
      4 => 'field_miseq_config',
      5 => 'field_miseq_config_other',
      6 => 'field_illumina_sample_type',
      7 => 'field_illumina_type_of_rnaseq',
      8 => 'field_illumina_dna_insert_size',
      9 => 'field_illumintype_of_dna_library',
      10 => 'field_illumina_dna_type_of_enri',
      11 => 'field_illumina_mrna_enrichment',
      12 => 'field_illumina_paired_end',
      13 => 'field_illumina_hiseq_cycles_tot',
      14 => 'field_illumina_hiseq_pe_fals_oth',
      15 => 'field_ilummina_custom_enrichment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Illumina',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_illumina_setup|node|order|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_iontorrent|node|order|default';
  $field_group->group_name = 'group_iontorrent';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_tab2';
  $field_group->data = array(
    'label' => 'Ion-Torrent/Proton',
    'weight' => '8',
    'children' => array(
      0 => 'field_iontorrent_read_length',
      1 => 'field_ionproton_read_length',
      2 => 'field_ion_sample_type',
      3 => 'field_ion_dna_library',
      4 => 'field_ion_rna_library',
      5 => 'field_barcoding_required',
      6 => 'field_torrent_throughput_chip',
      7 => 'field_proton_throughput_chip',
      8 => 'field_ion_instrument_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Ion-Torrent/Proton',
      'instance_settings' => array(
        'classes' => ' group-iontorrent field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_iontorrent|node|order|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_iontorrent|node|order|form';
  $field_group->group_name = 'group_iontorrent';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ion-Torrent/Proton ',
    'weight' => '6',
    'children' => array(
      0 => 'field_iontorrent_read_length',
      1 => 'field_ionproton_read_length',
      2 => 'field_ion_sample_type',
      3 => 'field_ion_dna_library',
      4 => 'field_ion_rna_library',
      5 => 'field_barcoding_required',
      6 => 'field_torrent_throughput_chip',
      7 => 'field_proton_throughput_chip',
      8 => 'field_ion_instrument_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Ion-Torrent/Proton ',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_iontorrent|node|order|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_new_uppnex_project_registr|node|order|default';
  $field_group->group_name = 'group_new_uppnex_project_registr';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_gen_info';
  $field_group->data = array(
    'label' => 'New UPPNEX project registration',
    'weight' => '104',
    'children' => array(
      0 => 'field_new_project_name',
      1 => 'field_tech_admin_name',
      2 => 'field_tech_admin_email',
      3 => 'field_other_uppnex_project_membe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_new_uppnex_project_registr|node|order|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_new_uppnex_project_registr|node|order|form';
  $field_group->group_name = 'group_new_uppnex_project_registr';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gen_info';
  $field_group->data = array(
    'label' => 'New UPPNEX project registration',
    'weight' => '0',
    'children' => array(
      0 => 'field_new_project_name',
      1 => 'field_tech_admin_name',
      2 => 'field_tech_admin_email',
      3 => 'field_other_uppnex_project_membe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-new-uppnex-project-registr field-group-fieldset ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_new_uppnex_project_registr|node|order|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_order_information|node|order|default';
  $field_group->group_name = 'group_order_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_tab2';
  $field_group->data = array(
    'label' => 'Order information',
    'weight' => '4',
    'children' => array(
      0 => 'field_link_to_reference',
      1 => 'field_genome_size_',
      2 => 'field_handling_of_leftover_sampl',
      3 => 'field_handling_of_leftover_libra',
      4 => 'field_platform',
      5 => 'field_number_of_samples',
      6 => 'field_special_requirements',
      7 => 'field_which_scilifelab_node_shou',
      8 => 'field_other_species',
      9 => 'field_expected_date_of_sample_de',
      10 => 'field_order_info_supported_speci',
      11 => 'field_coverage',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_order_information|node|order|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_order_information|node|order|form';
  $field_group->group_name = 'group_order_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Order information',
    'weight' => '2',
    'children' => array(
      0 => 'field_link_to_reference',
      1 => 'field_genome_size_',
      2 => 'field_handling_of_leftover_sampl',
      3 => 'field_handling_of_leftover_libra',
      4 => 'field_platform',
      5 => 'field_number_of_samples',
      6 => 'field_special_requirements',
      7 => 'field_which_scilifelab_node_shou',
      8 => 'field_other_species',
      9 => 'field_expected_date_of_sample_de',
      10 => 'field_order_info_supported_speci',
      11 => 'field_coverage',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-order-information field-group-fieldset ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_order_information|node|order|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_solid|node|order|default';
  $field_group->group_name = 'group_solid';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_tab2';
  $field_group->data = array(
    'label' => 'SOLiD',
    'weight' => '7',
    'children' => array(
      0 => 'field_solid_instrument',
      1 => 'field_wgs_mp_insert_length',
      2 => 'field_read_length',
      3 => 'field_solid_paired_end',
      4 => 'field_solid_sample_type',
      5 => 'field_solid_dna_library',
      6 => 'field_solid_rna_library',
      7 => 'field_solid_number_of_lanes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-solid field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_solid|node|order|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_solid|node|order|form';
  $field_group->group_name = 'group_solid';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SOLiD',
    'weight' => '5',
    'children' => array(
      0 => 'field_solid_instrument',
      1 => 'field_wgs_mp_insert_length',
      2 => 'field_read_length',
      3 => 'field_solid_paired_end',
      4 => 'field_solid_sample_type',
      5 => 'field_solid_dna_library',
      6 => 'field_solid_rna_library',
      7 => 'field_solid_number_of_lanes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'SOLiD',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_solid|node|order|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab2|node|order|default';
  $field_group->group_name = 'group_tab2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'order';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'tab',
    'weight' => '0',
    'children' => array(
      0 => 'group_flx',
      1 => 'group_illumina_setup',
      2 => 'group_bioinformatics',
      3 => 'group_gen_info',
      4 => 'group_solid',
      5 => 'group_iontorrent',
      6 => 'group_order_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-tab2 field-group-htabs',
      ),
    ),
  );
  $export['group_tab2|node|order|default'] = $field_group;

  return $export;
}
