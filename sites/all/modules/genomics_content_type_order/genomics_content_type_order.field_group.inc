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
      0 => 'field_bioinf_expertise',
      1 => 'field_bioinf_prev_exp_ngs',
      2 => 'field_bioinf_best_practice',
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
      0 => 'field_bioinf_expertise',
      1 => 'field_bioinf_prev_exp_ngs',
      2 => 'field_bioinf_best_practice',
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
      2 => 'field_flx_totnum_picotiter',
      3 => 'field_flx_reg_per_plate',
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
      2 => 'field_flx_totnum_picotiter',
      3 => 'field_flx_reg_per_plate',
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
      0 => 'field_geninfo_files',
      1 => 'field_geninfo_ex_uppnex_proj',
      2 => 'field_geninfo_cust_proj_name',
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
      0 => 'field_geninfo_files',
      1 => 'field_geninfo_ex_uppnex_proj',
      2 => 'field_geninfo_cust_proj_name',
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
      0 => 'field_illumina_instrument',
      1 => 'field_illumina_number_of_lanes',
      2 => 'field_illumina_hiseq_conf',
      3 => 'field_illumina_hiseq_conf_other',
      4 => 'field_illumina_miseq_conf',
      5 => 'field_illumina_miseq_conf_other',
      6 => 'field_illumina_sample_type',
      7 => 'field_illumina_type_of_rnaseq',
      8 => 'field_illumina_dna_insert_size',
      9 => 'field_illumina_dnalib_type',
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
      0 => 'field_illumina_instrument',
      1 => 'field_illumina_number_of_lanes',
      2 => 'field_illumina_hiseq_conf',
      3 => 'field_illumina_hiseq_conf_other',
      4 => 'field_illumina_miseq_conf',
      5 => 'field_illumina_miseq_conf_other',
      6 => 'field_illumina_sample_type',
      7 => 'field_illumina_type_of_rnaseq',
      8 => 'field_illumina_dna_insert_size',
      9 => 'field_illumina_dnalib_type',
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
      0 => 'field_ion_tor_rlength',
      1 => 'field_ion_pro_rlength',
      2 => 'field_ion_sample_type',
      3 => 'field_ion_dna_library',
      4 => 'field_ion_rna_library',
      5 => 'field_ion_barcode_req',
      6 => 'field_ion_tor_thrput_chip',
      7 => 'field_ion_pro_thrput_chip',
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
      0 => 'field_ion_tor_rlength',
      1 => 'field_ion_pro_rlength',
      2 => 'field_ion_sample_type',
      3 => 'field_ion_dna_library',
      4 => 'field_ion_rna_library',
      5 => 'field_ion_barcode_req',
      6 => 'field_ion_tor_thrput_chip',
      7 => 'field_ion_pro_thrput_chip',
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
      0 => 'field_new_upnx_proj_name',
      1 => 'field_new_upnx_tadmin_name',
      2 => 'field_new_upnx_tadmin_email',
      3 => 'field_new_upnx_oth_member',
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
      0 => 'field_new_upnx_proj_name',
      1 => 'field_new_upnx_tadmin_name',
      2 => 'field_new_upnx_tadmin_email',
      3 => 'field_new_upnx_oth_member',
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
      0 => 'field_ordinf_reflink',
      1 => 'field_ordinf_genome_size',
      2 => 'field_ordinf_left_sample',
      3 => 'field_ordinf_left_lib',
      4 => 'field_ordinf_platform',
      5 => 'field_ordinf_num_samp',
      6 => 'field_ordinf_special_req',
      7 => 'field_ordinf_scilife_node',
      8 => 'field_ordinf_species_oth',
      9 => 'field_ordinf_date_samp_dev',
      10 => 'field_ordinf_species',
      11 => 'field_ordinf_coverage',
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
      0 => 'field_ordinf_reflink',
      1 => 'field_ordinf_genome_size',
      2 => 'field_ordinf_left_sample',
      3 => 'field_ordinf_left_lib',
      4 => 'field_ordinf_platform',
      5 => 'field_ordinf_num_samp',
      6 => 'field_ordinf_special_req',
      7 => 'field_ordinf_scilife_node',
      8 => 'field_ordinf_species_oth',
      9 => 'field_ordinf_date_samp_dev',
      10 => 'field_ordinf_species',
      11 => 'field_ordinf_coverage',
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
      1 => 'field_solid_mate_pair',
      2 => 'field_solid_rlength',
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
      1 => 'field_solid_mate_pair',
      2 => 'field_solid_rlength',
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
